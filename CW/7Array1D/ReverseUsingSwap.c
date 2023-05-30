#include <stdio.h>
void reverse(int arr[],int startIndex, int lastIndex)
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
    
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr,2,4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}