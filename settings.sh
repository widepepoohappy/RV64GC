#!/bin/bash

export WORK_ROOT=$(pwd)

export SCRIPTS_ROOT=${WORK_ROOT}/scripts
export RTL_ROOT=${WORK_ROOT}/rtl

source ${SCRIPTS_ROOT}/dependencies_check.sh

source ${SCRIPTS_ROOT}/source_fetch.sh
