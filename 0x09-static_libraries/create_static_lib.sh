#!/bin/bash
gcc -Wall -Wextra -Werror -Pendantic -c *.c
ar rc liball.a *.o
