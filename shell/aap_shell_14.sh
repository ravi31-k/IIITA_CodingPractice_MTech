#!/bin/bash

	declare -i ctr
	declare -i n

	n=9
	ctr=1
	while [ $ctr -lt $n ]; do
		echo $ctr $n
		ctr=ctr+1
		let n-=1
	done

	echo
	declare -a arr
	echo "Enter space-seperated multiple words"
	read -a arr
	echo ${arr[0]}
	echo ${arr[2]}

exit 0

