#include <stdio.h>
void main()
{
    int heap[10], no, i, j, child, root, temp;
    printf("\n Enter no of elements :");
    scanf("%d", &no);
    printf("\n Enter the nos : ");
    for (i = 0; i < no; i++)
        scanf("%d", &heap[i]);
    for (i = 1; i < no; i++)
    {
        child = i;
        do
        {
            root = (child - 1) / 2;
            if (heap[root] < heap[child]) /* to create MAX heap array */
            {
                temp = heap[root];
                heap[root] = heap[child];
                heap[child] = temp;
            }
            child = root;
        } while (child != 0);
    }

    printf("Heap array : ");
    for (i = 0; i < no; i++)
        printf("%d\t ", heap[i]);
    for (j = no - 1; j >= 0; j--)
    {
        temp = heap[0];
        heap[0] = heap[j]; /* swap max element with rightmost leaf element */
        heap[j] = temp;
        root = 0;
        do
        {
            child = 2 * root + 1; /* left node of root element */
            if ((heap[child] < heap[child + 1]) && child < j - 1)
                child++;
            if (heap[root] < heap[child] && child < j) /* again rearrange to max heap array */
            {
                temp = heap[root];
                heap[root] = heap[child];
                heap[child] = temp;
            }
            root = child;
        } while (child < j);
    }
    printf("\n The sorted array is : ");
    for (i = 0; i < no; i++)
        printf("\t %d", heap[i]);
}