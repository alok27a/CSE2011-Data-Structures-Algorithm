#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct patient
{
   int hn;
   char name[200];
   int age;
   int tn;
   float height;
   float weight;
   char dis[200];
};

void quicksort(struct patient s[], int first, int last)
{
   int i, j, pivot;
   patient temp;

   if (first < last)
   {
      pivot = first;
      i = first;
      j = last;

      while (i < j)
      {
         while (s[i].tn <= s[pivot].tn && i < last)
            i++;
         while (s[j].tn > s[pivot].tn)
            j--;
         if (i < j)
         {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }

      temp = s[pivot];
      s[pivot] = s[j];
      s[j] = temp;
      quicksort(s, first, j - 1);
      quicksort(s, j + 1, last);
   }
}

int main()
{
   patient s[10];
   int choice, n,i;
   cout << "***Quick Sort Application***" << endl;
   cout << "Number of patients\n";
   cin >> n;
   for(i=0;i<n;i++)
   {
      cin>>s[i].hn>>s[i].name>>s[i].age>>s[i].tn>>s[i].height>>s[i].weight>>s[i].dis;
   }
   quicksort(s,0,n-1);
   cout<<"\n";
   cout<<"\n";
   for(i=0;i<n;i++)
   {
      cout<<s[i].hn<<endl;
      cout<<s[i].name<<endl;
      cout<<s[i].age<<endl;
      cout<<s[i].tn<<endl;
      cout<<s[i].height<<endl;
      cout<<s[i].weight<<endl;
      cout<<s[i].dis<<endl;
      cout<<"\n";
   }
   return 1;
}