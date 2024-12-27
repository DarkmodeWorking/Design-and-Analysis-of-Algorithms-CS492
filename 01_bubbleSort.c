#include <stdio.h>

void bubble_sort(int A[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}

void main()
{
    int A[100], n, i;

    printf("Enter total number of elements:");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter A[%d]:", i);
        scanf("%d", &A[i]);
    }

    printf("Before Sorting the elements are:\n");
    for (i = 0; i < n; i++)
        printf("A[%d]=%d", i, A[i]);

    bubble_sort(A, n);

    printf("After Sorting the elements are:\n");
    for (i = 0; i < n; i++)
        printf("A[%d]=%d", i, A[i]);
}
