#include <stdio.h>
int stack[100],top=-1,max,choice;
void push();
void pop();
void show();
void main()
{
    printf("Enter the size of stack: ");
    scanf("%d",&max);
    while (choice != 4)
    {
        printf("1<--Add element\n");
        printf("2<--Remove element\n");
        printf("3<--Show stack\n");
        printf("4<--Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Enter valid choice\n");
            }
        };
    }
}
void push()
{
    if (top==max-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter Value: ");
        top=top+1;
        scanf("%d",&stack[top]);
    }
}
void pop()
{
    if (top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        top=top-1;
    }
}
void show()
{
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}