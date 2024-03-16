#!/bin/bash

echo "Enter a number: "
read num


temp=$num
digit_count=0
sum=0

while [ $temp -gt 0 ]
do
  (( digit_count++ ))
  temp=$((temp/10))
done

temp=$num
while [ $temp -gt 0 ]
do
  digit=$((temp % 10))
  (( sum += digit**digit_count ))
  temp=$((temp/10))
done

if [ $sum -eq $num ]
then
  echo "$num is an Armstrong number."
else
  echo "$num is not an Armstrong number."
fi