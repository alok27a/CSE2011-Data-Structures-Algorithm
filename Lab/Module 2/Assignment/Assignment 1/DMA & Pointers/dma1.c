#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int sum = 0, n, *ptr, i;
    scanf("%d", &n); //Number of elements in an array
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("%d", sum);
    free(ptr);
    return 1;
}