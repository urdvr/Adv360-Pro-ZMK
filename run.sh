#!/bin/bash

# Run make
make

# Navigate to the firmware directory
cd firmware


# Find the latest files with the given format and copy them to new names
left_file=$(ls -1t *-left.uf2 | head -n 1)
right_file=$(ls -1t *-right.uf2 | head -n 1)

# Check if the files exist and copy them
if [ -n "$left_file" ]; then
    cp "$left_file" left.uf2
    echo "Copied $left_file to left.uf2"
else
    echo "No left.uf2 file found"
fi

if [ -n "$right_file" ]; then
    cp "$right_file" right.uf2
    echo "Copied $right_file to right.uf2"
else
    echo "No right.uf2 file found"
fi
