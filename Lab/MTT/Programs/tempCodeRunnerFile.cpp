#include <stdio.h>

void selection_sort(int l[], int n)
{
    int minimum_index;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", l[i]);
        }
        printf("\n");
        minimum_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (l[j] < l[minimum_index])
            {
                minimum_index = j;
            }
        }
        int temp;
        temp = l[i];
        l[i] = l[minimum_index];
        l[minimum_index] = temp;
    }
}
void main()
{
    int n;
    printf("Number of elements ? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Iterations are:\n");
    selection_sort(arr, n);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}