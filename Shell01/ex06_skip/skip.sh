#!/bin/sh

# ls -l | sed -n '1~2'p <--- GNU extension

ls -l | sed -n 'p;n'

ls -l | awk "NR % 2==1"

ls -l | sed 'n;d'
