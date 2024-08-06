#include <stdio.h>
#include <stdlib.h>

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int quicksortPartition(int array[], int lowerB, int upperB)
{
    int pivot = array[upperB];
    int i = lowerB - 1;
    for (int j = lowerB; j < upperB; j++)
    {       
        if (array[j] < pivot)
        {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, upperB);
    return (i + 1);
}

void quicksort(int array[], int lowerB, int upperB)
{
    if (lowerB < upperB)
    {
        int pi = quicksortPartition(array, lowerB, upperB);

        quicksort(array, lowerB, pi - 1);
        quicksort(array, pi + 1, upperB);
    }
}

int main()
{
    int array[10] = {2, 1, 5, 7, 6, 3, 4, 8, 9, 0};
    int lowerB = 0;
    int upperB = 9;
    quicksort(array, lowerB, upperB);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}