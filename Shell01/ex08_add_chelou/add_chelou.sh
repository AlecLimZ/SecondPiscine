#!/bin/sh

NUM1=$(echo "$FT_NBR1" | tr "\'\\\\\"\?\!" "01234")
NUM2=$(echo "$FT_NBR2" | tr "mrdoc" "01234")
RES=$(echo "obase=13; ibase=5; $NUM1 + $NUM2" | bc)

echo $RES | tr '0123456789abc' 'gtaio luSnemf'


echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | sed 's/\\/1/
g' | sed 's/\"/2/g' | sed 's/\?/3/g' | sed 's/\!/4/g' | tr "mrdoc" "01234" | xargs ec
ho "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"


 echo $FT_NBR1 + $FT_NBR2 | tr "'\\\\\"\?\!mrdoc" "012340
 1234" | xargs echo "ibase=5; obase=23;" | bc| tr "0123456789ABC" "gtaio luSnemf"
