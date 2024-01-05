#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    // Using malloc() to allocate memory for 5 integers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory successfully allocated using malloc.\n");

    // Reading and displaying elements using malloc
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements entered using malloc:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Using calloc() to allocate memory for 5 integers initialized to zero
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory successfully allocated using calloc.\n");

    // Reading and displaying elements using calloc
    printf("Elements entered using calloc:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Using realloc() to resize memory for 10 integers
    int newSize = 2 * n;
    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Memory successfully reallocated using realloc.\n");

    // Reading and displaying elements after realloc
    printf("Enter %d more elements:\n", n);
    for (i = n; i < newSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements entered after realloc:\n");
    for (i = 0; i < newSize; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(ptr);
    printf("Memory freed.\n");

    return 0;
}
