#!/bin/bash

	clear

	for ((c = 40; c >= 0; c-=7)) do
		for ((r = 0; r < 10; r++)) do
			tput cup $r $c
			echo '.'
			sleep .1s
		done
	done

	tput cup 4 17
	echo 'Hello  World'
	tput cup 2

exit 0

