#include <stdio.h>

int main(){
    int array[10] = {5, 1, 1, 1, 4, 5, 6, 5, 1, 5};
    int i, count=0, k;

    for(i=0; i<10 ; i++){
        for(k=0; k<10 ; k++){
            if(array[i] == array[k]){
                count++;
            }
    }
    printf("%d", count);
    return 0;
}
}