#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];
    int index_max = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            index_max = i;
        }
    }
    printf("The maximum element is %d, located at index %d\n", max, index_max);
}