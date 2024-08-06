#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n = 1;
    char e = 'a';
    char string1[14] = "HELLO";
    char string2[14] = " heyeyeyey";

    //strcat(string1, string2);
    strncat(string1, string2, 15);
    printf("%s\n ", string1);


    if(strcmp(string1,string2) > 0){
        printf("string 1 is greater than string 2\n");
    } else if (strcmp(string1,string2) < 0){
        printf("string 2 is greater than string 1\n");
    } else if (strcmp(string1,string2) == 0){
        printf("both strings are equal\n");
    }

    strcpy(string2,string1);

    int length = strlen(string1);

    printf("%s \n %d", string2, length);

    scanf("%s", &string1);
    printf("%c\n", string1[4]);
    string1[3] = 'r';
    printf("%s", string1);


}