#!/bin/bash

	echo 'cat data/matrix.txt | sort -k 3'
	cat data/matrix.txt | sort -k 3
	echo
	echo "data/matrix.txt | sort -k 3 | column -t -s ' '"
	cat data/matrix.txt | sort -k 3 | column -t -s ' '
	echo

	echo 'cat data/matrix.txt | sort -k 3nr | column -t -s " "'
	cat data/matrix.txt | sort -k 3nr | column -t -s " "
	echo

	echo 'cat data/matrix.txt | sort -k 3n -k 2 | column -t -s " "'
	cat data/matrix.txt | sort -k 3n -k 2 | column -t -s " "
	echo

exit 0

