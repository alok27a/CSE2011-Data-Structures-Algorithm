// Binary search without using recursion--->NOTE BINARY SEARCH IS FOR SORTED ARRAY
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void binary_search(int arr[],int l,int h,int search)
{
    int midpos;
    while(l<=h)
    {
        midpos=(l+h)/2;
        if(arr[midpos]==search)
        {
            cout<<"Element is fouund at position "<<midpos+1;
            break;
        }
        else if(arr[midpos]>search)
        {
            h=midpos-1;
        }
        else{
            l=midpos+1;
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
    binary_search(arr,0,n-1,search);
    return 1;
}