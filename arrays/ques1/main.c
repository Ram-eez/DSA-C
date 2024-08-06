#include <stdio.h>

int main(){
    int array[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;


    for(i=0; i<10 ; i++){
        printf("element - %d: %d\n", i, array[i]);
    }
    return 0;
}