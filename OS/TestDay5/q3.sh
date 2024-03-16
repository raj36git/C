#!/bin/bash

is_prime() {
    local num=$1
    if [ $num -le 1 ]; then
        return 1
    fi
    local i=2
    while [ $((i * i)) -le $num ]; do
        if [ $((num % i)) -eq 0 ]; then
            return 1
        fi
        i=$((i + 1))
    done
    return 0
}
read -p "Enter the starting number of the range: " start
read -p "Enter the ending number of the range: " end

sum=0

for (( num=start; num<=end; num++ )); do
    if is_prime "$num"; then
        sum=$((sum + num))
    fi
done

echo "The sum of prime numbers within the range $start to $end is: $sum"
