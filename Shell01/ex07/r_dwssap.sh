#!/bin/sh

cat /etc/passwd | grep -v "#" | cut -d ":" -f 1 | sed '1d' | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr "\n" "," | sed 's/,/, /g' | sed $'s/..$/\\\t./' | awk 'NR>1{print PREV} {PREV=$0} END{printf("%s",$0)}'
