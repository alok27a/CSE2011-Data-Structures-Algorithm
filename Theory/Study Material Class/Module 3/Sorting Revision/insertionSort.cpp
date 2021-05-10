#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int i,n;
    cin>>n;
    int arr[10];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}