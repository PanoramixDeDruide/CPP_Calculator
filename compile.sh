#!/bin/bash

cpp -P -Wno-trigraphs calculator.h -o calculator
cpp -P -trigraphs calculator -o calculator2
cpp -P -trigraphs calculator2
rm calculator calculator2
