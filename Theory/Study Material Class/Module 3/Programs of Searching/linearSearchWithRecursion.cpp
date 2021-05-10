// Linear search using recursion
#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void linear_search(int arr[],int search,int n,int pos)
{
    if(pos<-1)
    {
        cout<<"Invalid position"<<endl;
    }
    else if(arr[pos]==search)
    {
        cout<<"Element found at position "<<pos+1;
    }
    else{
        linear_search(arr,search,n,pos+1);
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
    linear_search(arr,search,n,0);
    return 1;
}