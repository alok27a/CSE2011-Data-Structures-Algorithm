#include <stdio.h>
#include <iostream>
#include <string.h>
 
using namespace std;

void display();

struct node{
    int data;
    struct node *next;
}*temp,*head,*newnode;

void insert_at_beg()
{
    int num;
    newnode=new struct node;
    cout<<"Enter the number to be inserted"<<endl;
    cin>>num;
    newnode->data=num;
    if(head==NULL)
    {
        head=temp=newnode;
        temp->next=head;
    }
    else 
    {
        temp=head;
        newnode->next=temp;
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
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;
}

void del_at_begin()
{
     struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
    display();
}

void del_at_end()
{
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted\n");  
  
    }  
    display();
}

void display()
{
      struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("Printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    } 
}


int main()
{
    int choice;
    head=NULL;
    cout<<"***Circularly Singly Linked List***"<<endl;
    while(choice!=6)
    {
        cout<<"Please choose one of the following options"<<endl;
        cout<<"1.Insert at beginning\n2.Insert at end\n3.Delete at beginning\n4.Delete at End\n5.Display\n6.Exit"<<endl;
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
            del_at_begin();
            break;
        case 4:
            del_at_end();
            break;
        case 5:
            display();
            break;
        case 6:
            cout<<"Exiting..."<<endl;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
    return 1;
}