#include <stdio.h>
#include <string.h>
#include <math.h>

#define pi 3.1415

float fact(int a)
{
    float fact = 1;
    int i = 0;
    if (a == 0)
    {
        return 1;
    }
    else
    {
        for (i = 1; i < a + 1; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
float sina(float b)
{
    int k;
    float f;
    float sum = 0.00;
    float m;
    b = b * (pi / 180);
    for (k = 0; k < 10; k++)
    {
        f = fact(2 * k + 1);
        m = ((pow((-1), k)) / f) * (pow(b, (2 * k + 1)));
        sum += m;
    }
    printf("%f\n", sum);
}

int main()
{

    float x;
    scanf("%f", &x);
    int k;
    float f;
    float sum = 0.00;
    float m;
    x = x * (pi / 180);
    for (k = 0; k < 10; k++)
    {
        f = fact(2 * k + 1);
        m = ((pow((-1), k)) / f) * (pow(x, (2 * k + 1)));
        sum += m;
        if (k % 2 != 0)
        {
            sina(sum);
        }
    }
    printf("%f\n", sum);

    return 1;
}