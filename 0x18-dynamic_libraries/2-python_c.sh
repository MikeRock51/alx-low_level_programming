#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -Wall -Wextra -Werror -pedantic -shared *.o -o 100-operations.so
export LD_LIBRARY_PATH=:$LD_LIBRARY_PATH

