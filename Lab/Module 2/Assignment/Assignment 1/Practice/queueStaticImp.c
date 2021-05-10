#include <stdio.h>
#include <string.h>
#include <math.h>

int i, j, queue[50], f = -1, r = -1, n, choice, value;

void add()
{
    if (r == n - 1)
    {
        printf("Queue Full\n");
    }
    else if (r == -1 && f == -1)
    {
        r = 0;
        f = 0;
        printf("Enter number to be enqueued\n");
        scanf("%d", &value);
        queue[r] = value;
    }
    else
    {
        printf("Enter number to be enqueued\n");
        scanf("%d", &value);
        r++;
        queue[r] = value;
    }
}
void del()
{
    if (r == -1 || f > r)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        f++;
    }
}
void show()
{
    for (i = f; i <= r; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    printf("Enter the length of the queue\n");
    scanf("%d", &n);

    while (choice != 4)
    {
        printf("Enter your choice\n");
        printf("1.Add\n2.Delete\n3.Show\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Exiting...");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 1;
}