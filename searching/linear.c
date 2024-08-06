#include <stdio.h>
#include <stdlib.h>

int Linearsearch(int array[], int key, int sizearr)
{
    for (int i = 0; i < sizearr - 1; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[10] = {2, 1, 5, 7, 6, 3, 4, 8, 9, 0};
    int sizearr = 10;
    int index, key = 8;

    // int keyindex = Linearsearch(array, 4, sizearr);

    // if (keyindex == -1)
    // {
    //     printf("couldnt find the key");
    // }
    // else
    // {
    //     printf("%d is the index of %d", keyindex, array[keyindex]);
    // }
    for (int i = 0; i < sizearr - 1; i++)
    {
        if (array[i] == key)
        {
            index = i;
        }
    }

    printf("%d is %d", index, key);
}
