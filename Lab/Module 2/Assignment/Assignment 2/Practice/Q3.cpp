#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;
 
struct node{
    char name[50];
    int reg_no;
    int age;
    int phone;
    struct node *next;
}*head,*temp,*newnode;

int counter(int );

void insert()
{
    newnode= new struct node;
    cout<<"Enter the name of participant : ";
    cin>>newnode->name;
    cout<<"\n";
    cout<<"Enter the reg no of participant : ";
    cin>>newnode->reg_no;
    cout<<"\n";
    cout<<"Enter ur age : ";
    cin>>newnode->age;
    int c=counter(newnode->age);
    cout<<"\n";
    cout<<"Enter ur phone number : ";
    cin>>newnode->phone;
    if(head==NULL)
    {
        newnode->next=NULL;
        temp=head=newnode;
    }
    else
    {
        if(c<=4)
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            newnode->next=NULL;
            temp->next=newnode;
        }
        else
        {
            cout<<"More than 5 members of same age.Sorry!"<<endl;
        }
    }
}

void del()
{
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        temp=head;
        head = head->next;
        delete(temp);
    }
}
void display()
{
    struct node *r;
    int c = 0;
    r = head;
    while (r != NULL)
    {
        c++;
        cout<<r->name<<" "<<r->age<<" "<<r->reg_no<<" "<<r->phone;
        r = r->next;
    }
    printf("\n");
}

int counter(int a)
{
    struct node *s;
    s=head;
    int count=0;
    while(s!=NULL)
    {
        if(s->age==a)
        {
            count++;
        }
        else
        {
            continue;
        }
        s=s->next;
    }
    return count;
}


int main()
{
    int choice;
    cout<<"**Game Event**"<<endl;
    head=0;
    while(choice!=4)
    {
        cout<<"Pls enter your choice"<<endl;
        cout<<"1.Register for the event\n2.Delete\n3.Display all participants\n4.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Exiting......"<<endl;
            break;
        default:
            break;
        }
    }
    return 1;
}