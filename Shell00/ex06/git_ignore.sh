#!/bin/sh

git ls-files --others --exclude-from=.git/info/exclude

git ls-files -o -i --exclude-standard

git ls-files -o --ignored --exclude-standard

git ls-files --exclude-standard --others --ignored

find . -type f  | git check-ignore --stdin | cut -d'/' -f 2
