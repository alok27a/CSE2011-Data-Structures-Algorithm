#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num, choice, count, length;

void deleteAtEnd();
void deleteAtPos();
void display();

struct node
{
    int data;
    struct node *next;
} * newnode, *temp, *head;

void insertAtBeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    puts("Enter number to be stored");
    scanf("%d", &num);
    newnode->data = num;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    puts("Enter number to be stored");
    scanf("%d", &num);
    newnode->data = num;
    if (head == NULL)
    {
        head = temp = newnode;
        temp->next = NULL;
    }
    else
    {
        temp = head;
        while ((temp->next) != NULL)
        {
            temp = temp->next;
        }
        newnode->next = NULL;
        temp->next = newnode;
    }
}
void insertAtAny()
{
    printf("Please Enter the position to be inserted\n");
    int pos;
    scanf("%d", &pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number to be inserted\n");
    scanf("%d", &num);
    newnode->data = num;
    temp = head;
    int i = 1;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void delAtBeg()
{
    temp = head;
    head = temp->next;
    free(temp);
}
void delAtEnd()
{
    struct node *prevnode;
    temp = head;
    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = NULL;
    free(temp);
    display();
}
void deleteAtPos()
{
    int pos;
    printf("Please Enter the position to be deleted\n");
    scanf("%d", &pos);
    temp = head;
    struct node *aheadnode;
    int j;
    while (j = 1 != pos - 1)
    {
        temp = temp->next;
    }
    aheadnode = temp->next;
    temp->next = aheadnode->next;
    display();
    free(aheadnode);
}
void lenList()
{
    temp = head;
    length = 0;
    while (temp != 0)
    {
        length++;
        temp = temp->next;
    }
    printf("The length of the linked list is %d\n", length);
}
void lenOdd()
{
    temp = head;
    int odd = 0, even = 0;
    while (temp != 0)
    {
        if (temp->data % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        temp = temp->next;
    }
    printf("The number of Odd numbers are %d\n", odd);
    printf("The Number of Even Numbers are %d\n", even);
}

void search(int a)
{
    temp = head;
    while (temp != 0)
    {
        if (temp->data == a)
        {
            printf("Element is Found\n");
            break;
        }
        temp = temp->next;
    }
}

void reverse()
{
    struct node *prev, *curr, *next;
    prev = NULL;
    curr = head;
    next = curr->next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    display();
}
//21 15 10 5

void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");
}

void sum()
{
    temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
        }
    printf("%d\n", sum);
}

int main()
{
    puts("****Linked List****");
    head = NULL;
    while (choice != 13)
    {
        printf("Please Enter your choice\n");
        printf("1.Add at Beginning\n2.Add at End\n3.Add at a position\n4.Delete at Beginning\n5.Delete at End\n6.Delete at a Position\n7.Length of List\n8.Number of Odd and Even numbers\n9.Search an Element\n10.Reverse of List\n11.Show\n12.Sum\n13.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtAny();
            break;
        case 4:
            delAtBeg();
            break;
        case 5:
            delAtEnd();
            break;
        case 6:
            deleteAtPos();
            break;
        case 7:
            lenList();
            break;
        case 8:
            lenOdd();
            break;
        case 9:
            printf("Please Enter the element to be searched\n");
            int se;
            scanf("%d", &se);
            search(se);
            break;
        case 10:
            reverse();
            break;
        case 11:
            display();
            break;
        case 12:
            sum();
            break;
        case 13:
            printf("Exiting.....");
            break;
        default:
            printf("Invalid Input");
            break;
        }
    }
    return 1;
}
//98      21      15      10      5       99      100