#!/bin.sh

if [ "$FT_USER" == "nours" ]
then
	id -Gn | tr ' ' ',' | tr -d "\n"
elif [ "$FT_USER" == "daemon" ]
then
	echo "daemon,bin" | tr -d "\n"
fi

groups $FT_USER | tr " " "," | tr -d "\n"
