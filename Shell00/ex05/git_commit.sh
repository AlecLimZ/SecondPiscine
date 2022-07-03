#!/bin/sh

git log --format='%H' -n5

git log --pretty=format:"%H" -5
echo

git log --format="%H" -n5

git log -5 --pretty=%H

git log -5 --format="%H"

git log --format="%H" -n 5
