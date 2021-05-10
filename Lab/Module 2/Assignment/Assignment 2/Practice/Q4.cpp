#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

struct node
{
    int age;
    char name[20];
    char disease[30];
    char doctor_assigned[30];
    struct node *next;
} *head = NULL;

int choice;
void enqueue();
void dequeue();
void display();


void enqueue()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    cout<<"Enter patient's name: ";
    cin>>temp->name;
    cout<<"Enter patient's age: ";
    cin>>temp->age;
    cout<<"Enter disease of patient: ";
    cin>>temp->disease;
    cout<<"Enter doctor assigned to patient: ";
    cin>>temp->doctor_assigned;
    if (head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else if (head->next == NULL)
    {
        if (head->age > temp->age)
        {
            head->next = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }
    else
    {
        struct node *r;
        r = head;
        while (r->next != NULL)
        {
            if (r->next->age > temp->age)
            {
                r = r->next;
            }
            else
            {
                break;
            }
        }
        if (r == head)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            temp->next = r->next;
            r->next = temp;
        }
    }
}
void dequeue ()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = head;  
        head = head -> next;  
        free(ptr);  
    }  
}  
void display()
{
    int c = 0;
    struct node *r;
    r = head;
    while (r != NULL)
    {
        c++;
        printf("%d.%s(%d) , Disease: %s , Doctor Assigned: %s  \n", c, r->name, r->age,r->disease,r->doctor_assigned);
        r = r->next;
    }
}



int main()
{
    while (choice != 4)
    {
        printf("\n1.Insert a patient\n");
        printf("2.Discharge Patient \n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting..\n");
            break;
        default:
            printf("Invalid input\n");
        };
    }
    return 1;
}