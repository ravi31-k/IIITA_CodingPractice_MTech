#!/bin/bash

	x="1"
	y="01"

	if [ $x == $y ]; then
		echo "x == y"
	elif [ $x -eq $y ]; then
		echo "x -eq y"
	else
		echo "x and y are different"
	fi

exit 0

