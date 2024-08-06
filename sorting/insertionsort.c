#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10] = {2,1,5,7,6,3,4,8,9,0};
    int temp;

    for(int i = 1 ; i < 10; i++){
        temp = array[i];
        int j = i - 1;

        while(j>=0 && array[j]>temp){
            array[j+1] = array[j]; // j --> j+1 = j+1=2   eg j = 2, j+1? = 1 
            j--;
        }
        array[j+1] = temp;
    }
}
