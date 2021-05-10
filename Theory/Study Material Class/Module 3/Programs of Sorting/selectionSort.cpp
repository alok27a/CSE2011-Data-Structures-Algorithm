#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void selection_sort(int arr[],int n)
{
    int i,min,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int i,n,arr[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}