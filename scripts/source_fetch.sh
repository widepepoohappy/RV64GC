#!/bin/bash

# --- Static Dependency Structure ---
# Each entry is built as: {DEP_NAME, GIT_ADDRESS, GIT_RELEASE}
declare -a DEPENDENCIES=(
    # RISC-V Core Dependency
    "common_cells https://github.com/pulp-platform/common_cells v1.38.0"
    "axi https://github.com/pulp-platform/axi.git v0.39.8"
)
# -----------------------------------

echo "--- Starting Dependency Fetch Orchestration ---"

# Iterate over each dependency entry
for entry in "${DEPENDENCIES[@]}"; do
    # Read variables from the dependency entry using string redirection
    read -r DEP_NAME GIT_SRC_DIR GIT_SRC_RELEASE <<< "$entry"

    DEP_SRC_DIR="${RTL_ROOT}/dep/${DEP_NAME}"
    SCRIPT_TO_CALL="${SCRIPTS_ROOT}/source_fetch_${DEP_NAME}.sh" # Dynamically constructed script name

    echo ""
    echo "====================================================="
    echo "Checking dependency: ${DEP_NAME}"
    echo "====================================================="
    
    # 1. Check if the DEP_SRC_DIR already exists
    if [ -d "${DEP_SRC_DIR}" ]; then
        echo "-> Found: Directory ${DEP_SRC_DIR} exists. Skipping fetch."
        continue
    fi
    
    # 2. Check if the specific worker script exists and is executable
    if [ ! -x "${SCRIPT_TO_CALL}" ]; then
        echo "!!! ERROR: Specific worker script '${SCRIPT_TO_CALL}' is missing or not executable."
        echo "!!! Skipping ${DEP_NAME}. Please create this file and ensure it has executable permissions (chmod +x)."
        continue
    fi

    # If the directory does not exist, call the specific fetch script
    echo "-> Missing: Fetching source for ${DEP_NAME} by executing ${SCRIPT_TO_CALL}..."
    
    # Call the dependency-specific script.
    "${SCRIPT_TO_CALL}" "${DEP_NAME}" "${GIT_SRC_DIR}" "${GIT_SRC_RELEASE}"
    
    if [ $? -ne 0 ]; then
        echo ""
        echo "!!! CRITICAL ERROR: Fetch script failed for ${DEP_NAME}. Stopping dependency chain."
        exit 1
    fi
    
done

echo ""
echo "--- All dependencies processed successfully. ---"