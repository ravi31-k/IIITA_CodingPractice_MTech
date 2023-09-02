#!/bin/bash

	n=5
	for (( i = 0; i < n; i++ )) do
		arr[$i]=$(( 2 * i ))
	done

	for (( i = 0; i < n; i++ )) do
		echo "arr[$i] = ${arr[$i]}"
	done

exit 0

