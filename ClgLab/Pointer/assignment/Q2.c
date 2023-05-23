// 2.Write a user defined function to Sort an array of integer with pointer as argument.
#include <stdio.h>

void sort(int *arr, int n) {
  int i, j, temp;

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  sort(arr, n);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
