/*exit(0)[Succesful termination] and exit(1)[Unsuccessful termination] are parts of <conio.h> */
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
char stack[10],expr[20];
int top=-1,i=0;
void main()
{
    printf("Enter expression: ");
    scanf("%[^\n]%*c", expr);
    while(i<strlen(expr))
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            top = top + 1;
            stack[top] = expr[i];
        }
        else if(expr[i] == ')')
        {
            if(stack[top] == '(')
            {
                top = top - 1;
            }
            else
            {
                printf("Unbalanced Expression.");
                exit(0);
            }
        }
        else if(expr[i] == ']')
        {
            if(stack[top] == '[')
            {
                top = top - 1;
            }
            else
            {
                printf("Unbalanced Expression.");
                exit(0);
            }
        }
        else if(expr[i] == '}')
        {
            if(stack[top] == '{')
            {
                top = top - 1;
            }
            else
            {
                printf("Unbalanced Expression.");
                exit(0);
            }
        }
        i++;
    }
    if(top == -1)
    {
        printf("Balanced Expression");
        exit(0);
    }
    else
    {
        printf("Unbalanced Expression");
        exit(0);
    }
}