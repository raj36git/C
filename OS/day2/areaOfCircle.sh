# area of circle

#!/bin/bash

# Take input from user and calculate area.
read -p "Enter radius: " r

area=echo 3.14 \* $r \* $r | bc

echo "Area of circle : $area "
