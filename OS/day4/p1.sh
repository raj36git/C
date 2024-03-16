#!/bin/bash

count=0
sum=0

echo "Numbers between 100 and 200 divisible by 9 are:"

for (( num=100; num<=200; num++ )); do
    if [ $((num % 9)) -eq 0 ]; then
        echo $num
        ((count++))
        ((sum+=num))
    fi
done

echo "Number of integers divisible by 9: $count"
echo "Sum of integers divisible by 9: $sum"

