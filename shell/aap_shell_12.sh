#!/bin/bash

	n=5
	for (( i = 0; i < n; i++ )) do
		arr[$i]=$(( 2 * i ))
	done

	printf "%s\n" ${arr[@]}
	len=`echo ${#arr[@]}`
	echo "[ len = $len ]"
	echo

	for (( i = 0; i < len; i++ )) do
		echo "arr[$i] = " ${arr[$i]}
	done

exit 0

