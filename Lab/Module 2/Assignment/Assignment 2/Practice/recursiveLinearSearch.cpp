#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
int linear_search(int s,int arr[],int index)
{
    if(s<=-1)
    {
        return -1;
    }
    else if(arr[index]==s)
    {
        return 1;
    }
    else
    {
        return linear_search(s,arr,index+1);
    }
}

int main()
{
    int i,n;
    cout<<"The number of elements in arrray"<<endl;
    cin>>n;
    int arr[10];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the number to be searched"<<endl;
    cin>>search;
    int a=linear_search(search,arr,0);
    if(a==1)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }
    return 1;
}