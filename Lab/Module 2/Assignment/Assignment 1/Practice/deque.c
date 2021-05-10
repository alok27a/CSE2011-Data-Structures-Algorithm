#include <stdio.h>
#include <string.h>
#include <math.h>

int qu[50], r = -1, f = -1, i = 0, n, num, choice;

void enqu_front()
{
    if ((r == n - 1) || f == r + 1)
    {
        printf("Queue is Full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[f] = num;
    }
    else if ((f == 0))
    {
        f = n - 1;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[f] = num;
    }
    else
    {
        f--;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[f] = num;
    }
}
void dequ_front()
{
    if (f == -1 && r == -1)
    {
        printf("Queue Underflow\n");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}
void enqu_rear()
{
    if ((r == n - 1) || f == r + 1)
    {
        printf("Queue is Full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[r] = num;
    }
    if (r == n - 1)
    {
        r = 0;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[r] = num;
    }
    else
    {
        r++;
        printf("Enter element to be enqued\n");
        scanf("%d", &num);
        qu[r] = num;
    }
}
void dequ_rear()
{
    if (f == -1 && r == -1)
    {
        printf("Queue Underflow\n");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        r--;
    }
}
void show() 
{
    printf("The elements of the queue are:\n");
    if (f <= r)
    {
        while (f<= r)
        {
            printf("%d ", qu[f]);
            f++;
        }
    }
    else
    {
        while (f <=n - 1)
        {
            printf("%d ", qu[f]);
            f++;
        }
    }
    printf("\n");
}

int main()
{
    printf("Enter length of the queue\n");
    scanf("%d", &n);
    while (choice != 6)
    {
        printf("Enter your choice\n");
        printf("1.Add from front\n2.Add from rear\n3.Delete from front\n4.Delete from rear\n5.Show\n6.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqu_front();
            break;
        case 2:
            enqu_rear();
            break;
        case 3:
            dequ_front();
            break;
        case 4:
            dequ_rear();
            break;
        case 5:
            show();
            break;
        case 6:
            printf("Exiting...");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 1;
}