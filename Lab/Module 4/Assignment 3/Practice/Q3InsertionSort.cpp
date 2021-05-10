#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
struct phone{
    char model[100];
    int year;
    float cam;
    int ram;
    int mem;
    char os[100];
}s[10];

void insertion_sort(struct phone p[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=p[i].ram;
        j=i-1;
        while(j>=0 && p[j].ram>key)
        {
            p[j+1].ram=p[j].ram;
            j--;
        }
        p[j+1].ram=key;
    }
}

int main()
{
    int i,n;
    cout<<"Pls enter Number of mobile phones"<<endl;
    cin>>n; 
    for(i=0;i<n;i++)
    {
        cout<<"Pls enter the model of phone"<<" number "<<i+1<<endl;
        cin>>s[i].model;
        cout<<"Pls enter the year of phone"<<" number "<<i+1<<endl;
        cin>>s[i].year;
        cout<<"Pls enter the camera resoluton of phone"<<" number "<<i+1<<endl;
        cin>>s[i].cam;
        cout<<"Pls enter the RAM of phone"<<" number "<<i+1<<endl;
        cin>>s[i].ram;
        cout<<"Pls enter the memory of phone"<<" number "<<i+1<<endl;
        cin>>s[i].mem;
        cout<<"Pls enter the OS of phone"<<" number "<<i+1<<endl;
        cin>>s[i].os;
    }
    insertion_sort(s,n);
    cout<<"\n";
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<s[i].year<<endl;
        cout<<s[i].model<<endl;
        cout<<s[i].cam<<endl;
        cout<<s[i].ram<<endl;
        cout<<s[i].mem<<endl;
        cout<<s[i].os<<endl;
        cout<<"\n";
    }
    return 1;
}