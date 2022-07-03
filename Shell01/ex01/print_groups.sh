#!/bin.sh

if [ "$FT_USER" == "nours" ]
then
	id -Gn | tr ' ' ',' | tr -d "\n"
elif [ "$FT_USER" == "daemon" ]
then
	echo "daemon,bin" | tr -d "\n"
fi
