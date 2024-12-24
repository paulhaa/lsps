#!/usr/bin/env bash

# This script uses quicktype (https://github.com/glideapps/quicktype) to generate the lsp models.

SOURCE_PATH="schema.json"
GEN_PATH="../src/server/models/generated"

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
