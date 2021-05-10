#include <stdio.h>
#include <ctype.h>
#include <string.h>
char infix[100], stk[20], x;
int top = -1, i = 0;

void push(char element)
{
    top = top + 1;
    stk[top] = element;
}
char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return stk[top--];
    }
}
int comp(char s)
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
void main()
{
    printf("Please enter an Infix Expression\n");
    gets(infix);
    for(i=0;i<strlen(infix);i++)
    {
        if (isalnum(infix[i]))
        {
            printf("%c ", infix[i]);
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((x = pop()) != '(')
            {
                printf("%c ", x);
            }
        }
        else if (infix[i] == '{')
        {
            push(infix[i]);
        }
        else if (infix[i] == '}')
        {
            while ((x = pop()) != '{')
            {
                printf("%c ", x);
            }
        }
        else if (infix[i] == '[')
        {
            push(infix[i]);
        }
        else if (infix[i] == ']')
        {
            while ((x = pop()) != '[')
            {
                printf("%c ", x);
            }
        }
        else
        {
            while (comp(stk[top]) >= comp(infix[i]))
            {
                printf("%c ", pop());
            }
            push(infix[i]);
        }
        
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}