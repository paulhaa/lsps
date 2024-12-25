#!/usr/bin/env bash

# This script uses quicktype (https://github.com/glideapps/quicktype) to generate the lsp models.

PROJECT_ROOT=".."
SOURCE_PATH="${PROJECT_ROOT}/lspSpec/schema.json"
GEN_PATH="${PROJECT_ROOT}/include/lsps/models/generated"

rm -rf ${GEN_PATH}

mkdir ${GEN_PATH}

quicktype --src-lang schema \
  ${SOURCE_PATH} \
  --lang cpp \
  --namespace lsps::models \
  --no-boost \
  --source-style multi-source \
  --include-location global-include \
  --out ${GEN_PATH}/models.hpp
