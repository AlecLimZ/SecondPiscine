#!/bin/sh

ifconfig -a | grep "ether " | cut -c 8- | cut -c -17

ifconfig -a | grep "ether " | cut -c 8- | tr -d " "
