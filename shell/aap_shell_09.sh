#!/bin/bash

find_copies()
{
	for x in `ls`; do
		for y in `ls`; do
			if [ $x == $y ]; then
				continue
			fi

			diff $x $y > /dev/null
			if [ $? -eq 0 ] && [ $x != $y ]; then
				echo $x and $y are same
			fi
		done
	done
}

	find_copies

exit 0

