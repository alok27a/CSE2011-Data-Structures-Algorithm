#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct details
{
    char name[20];
    char regno[20];
    int age;
    float gpa;
};

int main()
{
    struct details *d;
    int n, i;
    printf("Enter number of students");
    scanf("%d", &n);
    d = (struct details *)malloc(n * sizeof(struct details));
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d %f", (d + i)->name, (d + i)->regno, &(d + i)->age, &(d + i)->gpa);
        printf("%s %s %d %f", (d + i)->name, (d + i)->regno, (d + i)->age, (d + i)->gpa);
    }
    return 1;
}