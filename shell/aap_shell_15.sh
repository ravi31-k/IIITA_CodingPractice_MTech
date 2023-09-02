#!/bin/bash

	declare -A arr

	for key in a b c d e; do
		arr[$key]="$RANDOM"
	done

	echo "${arr[@]}"; echo
	for key in a b c d e; do
		echo $key ${arr[$key]}
	done

	echo List of keys
	for i in "${!arr[@]}"; do
		echo $i : ${arr[$i]}
	done

exit 0

