#!/bin/sh
# Compile all of the exercises in this directory.
for i in *.c; do
  `gcc $i -o $i.out`
done
