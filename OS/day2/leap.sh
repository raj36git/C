#!/bin/bash

# Take input from user and convert seconds to H, M, S.
read -p "Enter first number: " s
 
hour=echo $s \/ 3600 | bc
min=echo $s \% 3600 \/ 60 | bc
sec=echo $s \% 60 | bc

# Display the result
echo "Sum is: $hour" 
echo "Sum is: $min" 
echo "Sum is: $sec"