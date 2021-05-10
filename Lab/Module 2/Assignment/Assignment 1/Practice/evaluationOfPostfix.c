#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int i = 0, stack[50], top = -1, n, a, b, ans;
char postfix[50];

void push(int a)
{
    top++;
    stack[top] = a;
}
int pop()
{
    return stack[top--];
}
bool isDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '$')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    printf("Please enter a Postfix Expression\n");
    gets(postfix);
    n = strlen(postfix);
    for (i = 0; i < n; i++)
    {
        if (isDigit(postfix[i])==true)
        {
            int num = postfix[i] - 48;
            push(num);
        }
        else if (isOperator(postfix[i])==true)
        {
            a = pop();
            b = pop();
            switch (postfix[i])
            {
            case '+':
                ans = b + a;
                break;
            case '-':
                ans = b - a;
                break;
            case '*':
                ans = b * a;
                break;
            case '^':
                ans = b ^ a;
                break;
            case '/':
                ans = b / a;
                break;
            case '$':
                ans = b ^ a;
                break;
            default:
                printf("Invalid postfix expression");
                break;
            }
            push(ans);
        }
    }
    int finalAnswer = pop();
    printf("Answer of postfix expression is %d", finalAnswer);

    return 1;
}