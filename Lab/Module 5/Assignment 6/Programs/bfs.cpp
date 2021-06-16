// BFS --> Queue
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

// Queue Implementation

int q[100], r = -1, f = -1, n, i, j;

void enqueue(int n, int ins) // n->num of elements/no. of vertices  ins->num to be inserted
{
    if (r == n - 1)
    {
        cout << "Queue Full" << endl;
    }
    else if (r == -1 && f == -1)
    {
        f = r = 0;
        q[f] = ins;
    }
    else
    {
        r++;
        q[r] = ins;
    }
}

void dequeue()
{ 
    if (f == -1 && r == -1)
    {
        cout << "Queue Empty" << endl;
    }
    else if (f == r)
    {
        f = r = 0;
    }
    else
    {
        f++;
    }
}
// Queue End

//
int mat[10][10],visited[10];

void createMatrix()
{
    mat[0][0]=0;mat[0][1]=0;


}

void bfs(int i)// i will be the starting point
{
    cout<<i;


    
}


int main()
{

    return 1;
}