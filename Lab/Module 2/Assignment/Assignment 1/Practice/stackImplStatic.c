#include <stdio.h>

int stack[100], i, choice=0, n, j, top = -1, value;
void push()
{
    if (top == n - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter value to be pushed in the stack\n");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top--;
    }
}
void show()
{
    i = 0;
    for (i = top; i !=-1; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    printf("Enter the length of stack\n");
    scanf(" %d", &n);

    while (choice != 4)
    {
        printf("Available choices are\n");
        printf("1.Push \n2.Pop \n3.Show \n4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("\nExiting...");
            break;
        default:
            printf("\nInvalid Input");
            break;
        }
    }
}