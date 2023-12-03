#!/bin/bash

clang-cpp-16 -P -Wno-trigraphs calculator.h -o calculator_clang
clang-cpp-16 -P -Wno-trigraphs -trigraphs calculator_clang -o calculator_clang2
clang-cpp-16 -P -Wno-trigraphs -trigraphs calculator_clang2
rm calculator_clang calculator_clang2
