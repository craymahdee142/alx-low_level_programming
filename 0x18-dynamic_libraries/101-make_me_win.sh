#!/bin/bash
sleep 98; wget -P .. https://raw.githubusercontent.com/monoprosito/hobertonschool_low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
