#!/bin/sh

find . -type f -iname "*.sh" -exec basename {} \; | sed 's/.sh//'
