#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10] = {2,1,5,7,6,3,4,8,9,0};

    //bubble sort acending order
    int tmp;
    for(int i = 0; i<10 ; i++) {
        for(int j = 0; j<10 - i ; j++){
            if(array[j] > array[j+1]){
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
      for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    
        printf("\n ");
     // bubble sort for decending order
    for(int i = 0; i<10 ; i++) {
        for(int j = 0; j<10 ; j++){
            if(array[j] < array[j+1]){
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
      for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array[i]);
    }
}
