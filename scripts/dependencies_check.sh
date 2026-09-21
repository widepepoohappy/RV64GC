#!/bin/bash

# --- Configuration ---
TOOLS_TO_CHECK=("verilator" "gtkwave" "g++")
MISSING_TOOLS=()
SUCCESS_COUNT=0
TOTAL_COUNT=${#TOOLS_TO_CHECK[@]}

echo "Checking for essential simulation and synthesis tools..."
echo "----------------------------------------------------"

# --- Main Check Loop ---
# Iterate through the list of tools and use a case statement to perform the check
# for each specified tool name.
for tool_name in "${TOOLS_TO_CHECK[@]}"; do
    tool_path=""
    
    # Attempt to find the tool on the system PATH.
    tool_path=$(which "${tool_name}" 2>/dev/null)

    # Use a case statement to handle each specified tool.
    case "${tool_name}" in
        ("verilator")
            if [ -x "${tool_path}" ]; then
                echo "[  FOUND  ] ${tool_name} installed at: ${tool_path}"
                export VERILATOR=${tool_name}
                SUCCESS_COUNT=$((SUCCESS_COUNT + 1))
            else
                echo "[ MISSING ] ${tool_name} was not found on the system PATH. check: https://verilator.org/guide/latest/install.html#verilator-build-docker-container"
                MISSING_TOOLS+=("${tool_name}")
            fi
            ;;
        ("gtkwave")
            if [ -x "${tool_path}" ]; then
                echo "[  FOUND  ] ${tool_name} installed at: ${tool_path}"
                export GTKWAVE=${tool_name}
                SUCCESS_COUNT=$((SUCCESS_COUNT + 1))
            else
                echo "[ MISSING ] ${tool_name} was not found on the system PATH."
                MISSING_TOOLS+=("${tool_name}")
            fi
            ;;
        ("g++")
            if [ -x "${tool_path}" ]; then
                echo "[  FOUND  ] ${tool_name} installed at: ${tool_path}"
                SUCCESS_COUNT=$((SUCCESS_COUNT + 1))
            else
                echo "[ MISSING ] ${tool_name} was not found on the system PATH."
                MISSING_TOOLS+=("${tool_name}")
            fi
            ;;
        (*)
            # Catch any tools added to the array but not explicitly handled above.
            echo "[ ERROR ] Unhandled tool in script: ${tool_name}"
            ;;
    esac
done

echo "----------------------------------------------------"

# --- Summary ---

if [ "${SUCCESS_COUNT}" -eq "${TOTAL_COUNT}" ]; then
    echo "SUMMARY: All ${TOTAL_COUNT} required tools were successfully found."
else
    echo "SUMMARY: Found ${SUCCESS_COUNT} of ${TOTAL_COUNT} tools."
    echo "ACTION REQUIRED: The following tools are missing:"
    for missing in "${MISSING_TOOLS[@]}"; do
        echo "  - ${missing}"
    done
fi