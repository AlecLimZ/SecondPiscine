#!/bin/sh

ifconfig -a | grep "ether " | cut -c 8- | cut -c -17 | cat -e
