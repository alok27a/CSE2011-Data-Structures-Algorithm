#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

struct det{
    char name[100];
    int age;
    char prob[100];
    char doct[100];
}s[100];

int q[100],front=-1,rear=-1,element,n,i=0;

void show();

void enqueue()
{
    if (rear == n - 1)
    {
        cout<<"Overflow"<<endl;
    }
    else if (front == -1)
    {
        rear = rear + 1;
        front = front + 1;
        cout<<"Please enter the element to be enqueued"<<endl;
        cin>>s[i].name>>s[i].age>>s[i].prob>>s[i].doct;
        q[rear] = s[i];
        
    }
    else
    {
        int c = 0;
        printf("Please enter the element to be enqueued\n");
        scanf("%d", &element);
        for (int i = 0; i < rear; i++)
        {
            if (q[i] < element)
            {
                continue;
            }
            else
            {
                for (int j = rear + 1; j > i; j--)
                {
                    q[j] = q[j - 1];
                }
                q[i] = element;
                rear = rear + 1;
                return;
            }
        }
        rear = rear + 1;
        q[rear] = element;
    }


}

void dequeue()
{

}



int main()
{
    int i,j,choice;
    cout<<"***Hospital Queue***"<<endl;
    cout<<"Maximum number of patients allowed"<<endl;
    cin>>n;
    struct det s[n];
    while(choice!=4)
    {
        cout<<"Please choose one of the following option"<<endl;
        cout<<"1.Insert patient details\n2.Deqeue patient details\n3.Display Queue\n4.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            cout<<"Exiting...";
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }


    return 1;
}