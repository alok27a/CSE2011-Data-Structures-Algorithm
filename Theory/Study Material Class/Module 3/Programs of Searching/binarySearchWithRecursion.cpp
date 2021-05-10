// Binary search using recursion-->NOTE BINARY SEARCH IS FOR SORTED ARRAY
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int binary_search(int arr[], int l, int h, int x)
{
    if (h >= l)
    {
        int mid = l + (h - l) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x)
            return binary_search(arr, l, mid - 1, x);

        // Else the element can only be present in right subarray
        return binary_search(arr, mid + 1, h, x);
    }
    return -1;
}

int main()
{
    int n, i, arr[10], search;
    cin >> n; //Number of elements in arrray
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> search;
    int a = binary_search(arr, 0, n - 1, search);
    (a == -1) ? printf("Element is not present in array")
              : printf("Element is present at index %d", a);
    return 1;
}