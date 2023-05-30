// Find the second largest element in the given Array

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size)
{
  int largest = INT_MIN;
  int secondLargest = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
      secondLargest = largest;
      largest = arr[i];
    }
    else if (arr[i] > secondLargest && arr[i] < largest)
    {
      secondLargest = arr[i];
    }
  }

  return secondLargest;
}

int main()
{
  int arr[] = {5, 10, 2, 8, 15};
  int size = sizeof(arr) / sizeof(arr[0]);

  int secondLargest = findSecondLargest(arr, size);

  printf("The second largest number in the array is: %d\n", secondLargest);

  return 0;
}
