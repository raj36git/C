#!/bin/bash

echo "Enter the values of a, b, and c for the equation ax^2 + bx + c = 0:"
read a b c

discriminant=$((b * b - 4 * a * c))

if [[ $discriminant -lt 0 ]]; then
  echo "The equation has complex roots, which cannot be represented in this script."
elif [[ $discriminant -eq 0 ]]; then
  root1=$(((-b) / (2 * a)))
  echo "The equation has one real root: $root1"
else
  root1=$(((-b + sqrt($discriminant)) / (2 * a)))
  root2=$(((-b - sqrt($discriminant)) / (2 * a)))
  echo "The equation has two real roots:"
  echo "Root 1: $root1"
  echo "Root 2: $root2"
fi