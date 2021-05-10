#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[10], *p, n, i;
    scanf("%d", &n); //length of array
    p = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    printf("%d", sum);
    return 1;
}