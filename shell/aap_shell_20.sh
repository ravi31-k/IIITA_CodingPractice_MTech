#!/bin/bash

	{
		for ((i = 0 ; i <= 100 ; i+=1)); do
		sleep 0.1
		echo $i
		done
	} | whiptail --gauge "Please wait while we are sleeping..." 6 50 0

	clear
	echo "Choice(s): $CHOICE"

exit 0

