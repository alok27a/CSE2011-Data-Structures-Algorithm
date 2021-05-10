#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int i = 0, top = -1, stack[50], popedItem, n;
char infix[100];

void push(char a)
{
    top++;
    stack[top] = a;
}
char pop()
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        top--;
        return stack[top];
    }
}
int precedence(char s)
{
    if (s == '$' || s == '^')
    {
        return 4;
    }
    else if (s == '*' || s == '/')
    {
        return 3;
    }
    else if (s == '+' || s == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int main()
{
    printf("Please enter an Infix Expression\n");
    gets(infix);
    n = strlen(infix);
    for (i = 0; i < n; i++)
    {
        if (isalnum(infix[i]))
        {
            printf("%c", infix[i]);
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((popedItem = pop()) != '(')
            {
                printf("%c", popedItem);
            }
        }
        else if (infix[i] == '{')
        {
            push(infix[i]);
        }
        else if (infix[i] == '}')
        {
            while ((popedItem = pop()) != '{')
            {
                printf("%c", popedItem);
            }
        }
        else if (infix[i] == '[')
        {
            push(infix[i]);
        }
        else if (infix[i] == ']')
        {
            while ((popedItem = pop()) != '[')
            {
                printf("%c", popedItem);
            }
        }
        else
        {
            while (precedence(stack[top]) >= precedence(infix[i]))
            {
                printf("%c ", pop());
            }
            push(infix[i]);
        }
        while (top != -1)
        {
            printf("%c", pop());
        }
    }

    return 1;
}