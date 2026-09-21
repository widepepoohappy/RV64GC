#!/bin/bash

# This script fetches the 'common_cells' dependency.

# --- Configuration Variables (Passed as arguments) ---
# Arguments: $1=DEP_NAME, $2=GIT_SRC_DIR, $3=GIT_SRC_RELEASE

DEP_NAME="$1"
GIT_SRC_DIR="$2"
GIT_SRC_RELEASE="$3"

DEP_SRC_DIR="${RTL_ROOT}/dep/${DEP_NAME}"
GIT_TEMP_DIR="${DEP_SRC_DIR}/gitdir"

echo "--- Starting Fetch for ${DEP_NAME} ---"

# Function to reliably find the highest semantic version tag from the remote repository.
get_highest_version() {
    git ls-remote --tags "$1" | awk '{print $2}' | sed 's/refs\/tags\///' | grep -E '^v?[0-9]' | grep -v '\^{}' | sort -V | tail -n 1
}

# Find the latest release tag (highest version number)
LATEST_RELEASE=$(get_highest_version "${GIT_SRC_DIR}")

# Compare the requested release with the latest available release
if [ -n "$LATEST_RELEASE" ] && [ "$GIT_SRC_RELEASE" != "$LATEST_RELEASE" ]; then
    echo "!!! WARNING: Newer release available for ${DEP_NAME}!"
    echo "!!! Requested version: ${GIT_SRC_RELEASE}"
    echo "!!! Highest available version: ${LATEST_RELEASE}"
    echo "!!! Consider updating the release tag in source_fetch.sh."
elif [ -z "$LATEST_RELEASE" ]; then
    echo "Note: Could not determine the highest release for comparison (API issue or no versioned tags found)."
else
    echo "Note: Requested version ${GIT_SRC_RELEASE} matches or exceeds the highest known release."
fi

# --- Preamble: Create Directories and Clone ---

# Create the main source directory
mkdir -p "${DEP_SRC_DIR}"

# Moved: Create necessary structure folders (pkg, svh) in the prologue
echo "Preamble: Creating necessary structure folders (pkg, svh)."
mkdir -p "${DEP_SRC_DIR}/pkg"
mkdir -p "${DEP_SRC_DIR}/svh"

# Clone the repository and check out the specific release
echo "Preamble: Cloning repository ${GIT_SRC_DIR} at release ${GIT_SRC_RELEASE}..."
if git clone --depth 1 --branch "${GIT_SRC_RELEASE}" "${GIT_SRC_DIR}" "${GIT_TEMP_DIR}"; then
    echo "Preamble: Successfully cloned repository."
else
    echo "ERROR: Failed to clone repository ${GIT_SRC_DIR} or checkout release ${GIT_SRC_RELEASE}."
    # Clean up the partially created directory before exiting
    rm -rf "${DEP_SRC_DIR}"
    exit 1
fi

# --- Content: File Copy and Processing ---

echo "Content: Copying files from temporary git directory..."

# 1. Copy all .sv files from gitdir/src/ (excluding subdirectories like deprecated) 
# into DEP_SRC_DIR
echo "Content: Copying .sv source files..."
# Using find to ensure we only copy files directly under src/
find "${GIT_TEMP_DIR}/src" -maxdepth 1 -type f -name "*.sv" -exec cp {} "${DEP_SRC_DIR}/" \;

# 2. Copy .svh files from gitdir/include/common_cells into DEP_SRC_DIR/svh
echo "Content: Copying .svh header files..."
cp "${GIT_TEMP_DIR}/include/axi/"*.svh "${DEP_SRC_DIR}/svh/"

# --- Patch: Include Path Fixup ---
echo "Content: Fixing include paths in copied .sv files..."

find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*.sv" -exec sed -i 's|"common_cells/assertions.svh"|"assertions.svh"|g' {} \;
find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*.sv" -exec sed -i 's|"common_cells/registers.svh"|"registers.svh"|g' {} \;
find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*.sv" -exec sed -i 's|"axi/typedef.svh"|"typedef.svh"|g' {} \;
find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*.sv" -exec sed -i 's|"axi/port.svh"|"port.svh"|g' {} \;
find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*.sv" -exec sed -i 's|"axi/assign.svh"|"assign.svh"|g' {} \;

# Remove axi_test.sv as it is unsupported by verilator (5.020 2024-01-01 rev (Debian 5.020-1))
rm -f ${DEP_SRC_DIR}/axi_test.sv

# Move Package Files 
echo "Content: Moving SystemVerilog package files (*pkg*.sv) to pkg/ directory..."
# Look for regular files directly under DEP_SRC_DIR whose name contains 'pkg' and ends in '.sv'
# and move them to the pkg subdirectory.
find "${DEP_SRC_DIR}" -maxdepth 1 -type f -name "*pkg*.sv" -exec mv {} "${DEP_SRC_DIR}/pkg/" \;

# --- Epilogue: Cleanup ---

echo "Epilogue: Deleting temporary Git clone directory: ${GIT_TEMP_DIR}"
rm -rf "${GIT_TEMP_DIR}"

echo "--- ${DEP_NAME} setup complete. ---"
exit 0