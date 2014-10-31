#!/bin/sh
# Compile all of the exercises in this directory.
for i in *.c; do
  echo "building $i..."
  `gcc $i -o $i.out`
  echo "done."
done
