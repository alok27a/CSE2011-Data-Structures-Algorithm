// Binary search of an element in character array
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

template <class T>
class Searching
{
    T arr[100];
    int n; // Number of elements in array
    T search;

public:
    void get()
    {
        int i;
        cout << "Enter the number of elements in array" << endl;
        cin >> n;
        cout << "Enter the elements of array" << endl;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int search_in_arr()
    {
        cout << "Enter the element to be searched" << endl;
        cin >> search;
        int midpos;
        int l = 0, h = n - 1;
        while (l <= h)
        {
            midpos = (l + h) / 2;
            if (arr[midpos] == search)
            {
                cout << "Element is found at " << midpos + 1 << endl;
                return 1;
            }
            else if (arr[midpos] > search)
            {
                h = midpos - 1;
            }
            else
            {
                l = midpos + 1;
            }
        }
        return 0;
    }
};

int main()
{
    int a;
    Searching<char> s;
    s.get();
    a = s.search_in_arr();
    if (a == 0)
    {
        cout << "Element not found in array" << endl;
    }
    return 1;
}