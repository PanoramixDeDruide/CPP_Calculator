#!/bin/bash

if [[ ! -f processed_numbers.h ]]; then
	cpp -P -Wno-trigraphs -I number_sources number_sources/numbers.h -o processed_numbers.h
fi
clang-cpp-16 -P -Wno-trigraphs -trigraphs -I . calculator.h
