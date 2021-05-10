// Linear search without Recursion
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void linear_search(int arr[],int search,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"Element is present in array at position "<<i+1;
            break;
        }
    }
}

int main()
{
    int n,i,arr[10],search;
    cin>>n;//Number of elements in arrray
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>search;
    linear_search(arr,search,n);
    return 1;
}