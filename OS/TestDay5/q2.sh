#!/bin/bash

calculate_area() {
    local s=$(( ($1 + $2 + $3) / 2 ))
    local area=$(echo "scale=2; sqrt($s * ($s - $1) * ($s - $2) * ($s - $3))" | bc)
    echo "$area"
}

echo "Enter the sides of  triangle:"
read -p "Length of side 1: " side1
read -p "Length of side 2: " side2
read -p "Length of side 3: " side3

if [ "$side1" -eq "$side2" ] && [ "$side2" -eq "$side3" ]; then
    echo "This is an equilateral triangle."
elif [ "$side1" -eq "$side2" ] || [ "$side1" -eq "$side3" ] || [ "$side2" -eq "$side3" ]; then
    echo "This is an isosceles triangle."
else
    echo "This is a scalene triangle."
fi

area=$(calculate_area "$side1" "$side2" "$side3")
echo "Area of the triangle: $area square units"
