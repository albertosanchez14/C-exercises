#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int v1[10];
    char str[12];

    printf("The size of the vector is %lu and has %lu integers \n", sizeof(v1), sizeof(v1)/sizeof(int));
    printf("The size of the string is %lu and has %lu characters \n", sizeof(str), sizeof(str)/sizeof(char));
    printf("The length of the string is %lu \n", strlen(str));
    strcpy(str, "Ola k ase");
    printf("Copied, the size of the string is %lu and has %lu characters \n", sizeof(str), sizeof(str)/sizeof(char));
    printf("The length of the string is %lu \n", strlen(str));
}