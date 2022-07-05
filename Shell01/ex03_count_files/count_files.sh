#!/bin/sh

find . | wc -l | tr -d " "

( find . -type d && find . -type f ) | wc -l | sed 's/ //g'
