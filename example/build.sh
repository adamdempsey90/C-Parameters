#!/bin/bash

gcc -c main.c -o main.o
gcc -c read_pars.c -o read_pars.o
gcc read_pars.o main.o -o test

