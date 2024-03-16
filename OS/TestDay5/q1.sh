#!/bin/bash

echo "Enter temperature in Fahrenheit:"
read -r fahrenheit

celsius=$((($fahrenheit - 32) * 5 / 9))

echo "$fahrenheit Fahrenheit is equal to $celsius Celsius"

