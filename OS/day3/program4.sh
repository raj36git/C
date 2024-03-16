#!/bin/bash

echo "Enter the marks"
read m
echo "Grade"
if [ $m -ge 90 ]
 then 
  if [ $m -le 100]
  then 
  echo "O"
fi
elif [ $m -ge 80  ]
   then
   if [ $m -le 90 ]
   then 
   echo "E"
fi
elif [ $m -ge 70  ]
   then
   if [ $m -le 80 ]
   then 
   echo "A"
fi
elif [ $m -ge 60  ]
   then
   if [ $m -le 70 ]
   then 
   echo "B"
fi
elif [ $m -ge 50  ]
   then
   if [ $m -le 60 ]
   then 
   echo "C"
fi
elif [ $m -ge 40  ]
   then
   if [ $m -le 60 ]
   then 
   echo "D"
fi

echo "Fail"

fi

  