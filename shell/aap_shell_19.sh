#!/bin/bash

	CHOICE=$(whiptail --title "Radio list" --radiolist \
		"Choose user's permissions" 20 78 4 \
		"Apple" "Allow connections to other hosts" ON \
		"Bat" "Allow connections from other hosts" OFF \
		"Cat" "Allow mounting of local devices" OFF \
		"Dog" "Allow mounting of remote devices" OFF \
		3>&1 1>&2 2>&3
	)

	clear
	echo "Choice(s): $CHOICE"

exit 0

