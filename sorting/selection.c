#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {2, 1, 5, 7, 6, 3, 4, 8, 9, 0};
    int temp, i, j, min;

    for (i = 0; i < 10; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}
