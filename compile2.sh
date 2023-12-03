#!/bin/bash

clang-cpp-16 -P -Wno-trigraphs calculator.h -o calculator2
clang-cpp-16 -P -Wno-trigraphs -trigraphs calculator2
