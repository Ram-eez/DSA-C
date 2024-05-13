#include <stdio.h>

int main(){
    int array[10] = {5, 1, 1, 1, 4, 5, 6, 5, 1, 5};
    int *pArr = array;
    int i, min, max;

    for(i=0; i<10 ; i++){
        if(max < *(pArr+i)){
            max = *(pArr+i);
        }
        if(min > *(pArr+i)){
            min = *(pArr+i);
        }
    }
    printf("max is %d\n min is %d", max, min);
    return 0;
}
