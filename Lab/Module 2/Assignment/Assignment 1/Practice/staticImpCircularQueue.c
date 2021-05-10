#include <stdio.h>
#include <string.h>
#include <math.h>

int queue[50], i, n, value, choice, f, r;
void enqeue()
{
    if (f == (r + 1) % n)
    {
        printf("Queue is full");
    }
    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        printf("Enter element to be enqeued");
        scanf("%d", &value);
        queue[r] = value;
    }
    else
    {
        r = (r + 1) % n;
        printf("Enter element to be enqeued");
        scanf("%d", &value);
        queue[r] = value;
    }
}
void deqeue()
{
    if ((r == -1 && f == -1))
    {
        printf("Queue Empty");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        r=(r+1)%n;
    }
}
void show()
{
    int i=f;  
    if(f==-1 && r==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=r)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%n;  
        }  
    } 
}

int main()
{
    printf("Enter the number of elements in queue\n");
    scanf("%d", &n);
    while (n != 4)
    {
        printf("Please enter ur choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqeue();
            break;
        case 2:
            deqeue();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 1;
}