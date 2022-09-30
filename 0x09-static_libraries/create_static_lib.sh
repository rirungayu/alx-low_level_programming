#!/bin/bash
gcc -Wall -Werror -Wextra -stdgnu=89 -c *.c
ar rc liball.a *.o 
