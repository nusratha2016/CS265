Question 3

#!/bin/bash

read -p "Enter 3 integers: " int1 int2 int3
maximum=$int1

for i in $int1 $int2 $int3
do
  if [ $i -gt $maximum ] ; then
    let maximum=$i
  fi
done

echo $maximum
