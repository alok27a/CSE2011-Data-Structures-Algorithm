#include <stdio.h>

int q[100], front = -1, rear = -1, n, element;
void enqueue();
void dequeue();
void display();
int main()
{
    int temp;
    printf("Enter the number of elements in queue\n");
    scanf("%d", &n);
    while (temp != 4)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Quit\n");
        scanf("%d", &temp);
        switch (temp)
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
            printf("Exiting......");
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
    if (rear == n - 1)
    {
        printf("Overflow");
    }
    else if (front == -1)
    {
        rear = rear + 1;
        front = front + 1;
        printf("Please enter the element to be enqueued\n");
        scanf("%d", &element);
        q[rear] = element;
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
    if (rear == -1)
    {
        printf("Underflow");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
}
void display()
{
    printf("The elements that are present\n");
    for (int i = front; i < rear + 1; i++)
    {
        printf("%d ", q[i]);
    }
}