#!/bin/bash

	printf "Enter value of n: "
	read n

	i=0
	while [ $i -lt $n ]; do
		arr[$i]=$(( 2 * $i ))
		i=$(( $i + 1 ))
	done

	i=0
	while [ $i -lt $n ]; do
		printf "arr[%2d] = %5d\n" $i ${arr[$i]}
		i=$(( $i + 1 ))
	done

	arr[9]=100

	unset arr[1]
	echo "arr[8] = " ${arr[8]}
	echo "arr[9] = " ${arr[9]}
	echo "arr[*] = " ${arr[*]}

	unset arr
	echo "arr[*] = " ${arr[*]}

exit 0

