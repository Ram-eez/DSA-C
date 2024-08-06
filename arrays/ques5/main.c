#include <stdio.h>

int main(){
    int array[10] = {5, 1, 1, 1, 4, 5, 6, 5, 1, 5};
    int i, min = array[0], max= array[0];

    for(i=0; i<10 ; i++){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    printf("max is %d\n min is %d", max, min);
    return 0;
}
