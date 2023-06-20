#!/bin/bash
wget -P /tmp https://github.com/move7/alx-low_level_programming/blob/master/0x18-dynamic_libraries/rand.so
export LD_LIBRARY_PATH=/tmp
