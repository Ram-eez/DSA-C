#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int key, int sizearr)
{
    int low = 0;
    int high = sizearr - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        int valueMID = array[middle];

        if (array[valueMID] == key)
        {
            return valueMID;
        }
        else if (array[valueMID] < key)
        {
            low = valueMID + 1;
        }
        else if (array[valueMID] > key)
        {
            high = valueMID - 1;
        }
    }
    return -1;
}

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,11};
    int sizearr = 10;

    int searchh = binarySearch(array, 3, sizearr);

    if(searchh==-1 ){
        printf("value did not found");
    } else {
        printf("%d index found ", searchh);
    }
}