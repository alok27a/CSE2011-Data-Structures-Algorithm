#include <stdio.h>
int queue[100], front=-1, rear=-1, n, choice;
void enqueue();
void dequeue();
void display();
void main()
{
    printf("Enter max size of Queue: ");
    scanf("%d",&n);
    while(choice != 4)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Invalid Choice\n");
            }
        };
    }
}
void enqueue()
{
    if (rear==n-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (rear==-1)
        {
            printf("Enter element: ");
            front = front + 1;
            rear = rear + 1;
            scanf("%d",&queue[rear]);
        }
        else
        {
            printf("Enter element: ");
            rear = rear + 1;
            scanf("%d",&queue[rear]);
        }
    }
    
}
void dequeue()
{
    if (rear==-1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        front = front + 1;
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}