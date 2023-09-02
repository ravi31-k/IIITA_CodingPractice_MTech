#!/bin/bash

	x=1

	while [ $x -le 10 ]; do
		echo $x
		x=$((x + 2))
	done
	echo

	for fn in `ls *.sh`; do
		echo $fn
	done

exit 0

