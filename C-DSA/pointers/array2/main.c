#include <stdio.h>

int main(){
    int array[3] = {2, 5, 8};
    int *pArr = array;
    int i, sum=0;

    for(i=0; i<3 ; i++){
        sum = sum + *(pArr+i);
    }
    printf("Sum of all elements stored in the array is: %d", sum);
    return 0;
}