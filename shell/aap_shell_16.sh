#!/bin/bash

	for file in `ls *2.sh | tail -2`; do
		fnew=`echo $file | tr [a-kw] [A-K#] | sed 's/sh/SY/'`
		ls -l $file
		echo $file "->" $fnew
		echo
	done

exit 0

