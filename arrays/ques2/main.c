#include <stdio.h>

int main(){
    int array[3] = {2, 5 ,7};
    int i;

    for(i=2; i>=0 ; i--){
        printf("element - %d: %d = %p\n", i, array[i], array +i);
    }
    return 0;
}