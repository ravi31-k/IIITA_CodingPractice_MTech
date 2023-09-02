#!/bin/bash

fact()
{
	x=$1
	f=1

	i=1
	while [ $i -le $x ]; do
		f=$((f * i))
		printf "%3d %10d\n" $i $f
		i=$((i + 1))
	done
}

	n=10

	fact $n
	echo "fact($n) = $f"

exit 0

