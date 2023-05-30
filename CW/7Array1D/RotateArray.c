#include <stdio.h>
void reverse(int arr[], int startIndex, int lastIndex)
{
    int i = startIndex;
    int j = lastIndex;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    // printf("Rotation point: ");
    // scanf("%d", &k);
    k = k % 6;

    reverse(arr, 0, n-1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}