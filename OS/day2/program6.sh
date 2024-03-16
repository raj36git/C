# parameter

#!/bin/bash

# Take input from user and calculate sum.
read -p "Enter first side: " side1;
read -p "Enter second side: " side2;
read -p "Enter third side: " side3;
 
# Calculate sum
sum=$(( $side1 + $side2 + $side3 ));

# Display the result
echo "Sum is: $sum" 