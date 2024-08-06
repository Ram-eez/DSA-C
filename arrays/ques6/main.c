#include <stdio.h>

int main(){
    int array[100]; 
    int sizeArr, i, k, tmp;

    printf("Enter the size of the array: ");
    scanf("%d", &sizeArr);

    printf("Enter the elements of the array: ");
    for(i=0 ; i<sizeArr ; i++){
        printf("Enter element %d :", i+1);
        scanf("%d", &array[i]);
    }


    for(i=0 ; i<sizeArr ; i++){
        for(k=0 ; k<sizeArr ; k++){
            if(array[k] < array[i]){
                tmp = array[i];
                array[i] = array[k];
                array[k] = tmp;
            }
        }
    }

     for (i = 0; i < sizeArr; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");


        for(i=0 ; i<sizeArr ; i++){
        for(k=0 ; k<sizeArr ; k++){
            if(array[k] > array[i]){
                tmp = array[i];
                array[i] = array[k];
                array[k] = tmp;
            }
        }
    }
     for (i = 0; i < sizeArr; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}

