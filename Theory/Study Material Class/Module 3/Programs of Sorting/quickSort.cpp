#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void partition(int arr[], int lb, int ub)
{
    int pivot = lb;
    int start = lb;
    int end = ub;
    if (lb < ub)
    {
        while (start < end)
        {
            while (arr[start] <= arr[pivot] && start < ub)
            {
                start++;
            }
            while (arr[end] > arr[pivot])
            {
                end--;
            }
            if (start < end)
            {
                swap(arr[start], arr[end]);
            }
        }
        swap(arr[pivot], arr[end]);
        partition(arr, lb, end - 1);
        partition(arr, end + 1, ub);
    }
}

int main()
{
    int i, n;
    cout << "Enter the number of elements " << endl;
    cin >> n;
    int arr[20];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    partition(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 1;
}