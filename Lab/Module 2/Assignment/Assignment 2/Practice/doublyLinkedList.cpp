#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void display();

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*temp,*newnode;
 
void insert_at_beg()
{
    int num;
    newnode=new struct node;//DMA in cpp
    cout<<"Enter the number to be inserted"<<endl;
    cin>>num;
    newnode->data=num;
    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        head=temp=newnode;
    }
    else
    {
        temp=head;
        newnode->next=temp;
        newnode->prev=NULL;
        head=newnode;
    }
}

void insert_at_end()
{
    int num;
    newnode=new struct node;
    cout<<"Enter the number to be inserted"<<endl;
    cin>>num;
    newnode->data=num;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->next=NULL;
    temp->next=newnode;
    temp->next->prev=temp;
}

void insert_at_pos()
{
    int count=0,pos,num;
    newnode=new struct node;
    cout<<"Enter the position to be inserted"<<endl;
    cin>>pos;
    cout<<"Enter the number to be inserted"<<endl;
    cin>>num;
    newnode->data=num;
    temp=head;
    while(count!=pos-2)
    {
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
}
void delete_at_beg()
{
    temp=head;
    head=temp->next;
    delete(temp);
    display();
}

void delete_at_end()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete(temp);
    display();
}

void delete_at_pos()
{
    int pos,count,i;
    temp=head;
    cout<<"Enter the position to be deleted"<<endl;
    cin>>pos;
    for(i=0; i<pos && head!=NULL; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;   // Assign the next pointer of node to be deleted to its previous node's prev pointer
    temp->next->prev = temp->prev;   // Assign the prev pointer of the node to be deleted to its next node's next pointer
    free(temp);
    display();
}

void delete_at_val()
{
    int val;
    struct node *ptr;
    cout<<"Enter the value to be delted"<<endl;
    cin>>val;
    temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    ptr = temp -> next;  
    temp -> next = ptr -> next;  
    ptr -> next -> prev = temp;  
    display();

}

void display()
{
    struct node* ptr;
    ptr = head;
    while(ptr != NULL) {
    cout<< ptr->data <<" ";
    ptr = ptr->next;
   }
   cout<<endl;
}


int main()
{
    cout<<"*****Doubly Linked List*****"<<endl;
    int choice;
    int head=0;
    while(choice!=9)
    {
        cout<<"The operations that can be done"<<endl;
        cout<<"1.Insert At Begining\n2.Insert At End\n3.Insert At any Position\n4.Deletion at Begining\n5.Deletion at End\n6.Deletion at a Position\n7.Deletion based on Value\n8.Display\n9.Exit"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            insert_at_beg();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_at_pos();
            break;
        case 4:
            delete_at_beg();
            break;
        case 5:
            delete_at_end();
            break;
        case 6:
            delete_at_pos();
            break;
        case 7:
            delete_at_val();
            break;
        case 8:
            display();
            break;
        case 9:
            cout<<"Exiting"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
    return 1;
}