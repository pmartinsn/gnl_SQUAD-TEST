#!/bin/bash

gcc -Wall -Werror -Wextra  Put.C-H-InHere/get_next_line.c Put.C-H-InHere/get_next_line.h Put.C-H-InHere/get_next_line_utils.c gnl2.42sp.c -I ../ -D BUFFER_SIZE=250  && ./a.out