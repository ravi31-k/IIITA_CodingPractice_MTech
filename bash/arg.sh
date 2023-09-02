#! /bin/bash

echo $0 $1 $2 $3 ' > echo $0 $1 $2 $3'
#using array
args=("$@")
echo ${args[0]} ${args[1]} ${args[2]} ${args[3]}
