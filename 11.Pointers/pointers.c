#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(){
    int *p1; 
    int *p2;
    char *str;

    /*Pointer p1*/
    printf("Address of the pointer p1 is %p \n", p1);
    p1 = malloc(sizeof(int));
    printf("Malloc. Direction of p1 is %p \n", p1);
    *p1 = 26;
    printf("The value of the pointer p1 is %i \n", *p1);
    free(p1);

    /*Pointer p2*/
    printf("Address of the pointer p2 is %p \n", p2);
    p2 = malloc(sizeof(int));
    printf("Malloc. Direction of p2 is %p \n", p2);
    *p2 = 2683910;
    printf("The value of the pointer p2 is %i \n", *p2);
    free(p2);

    /*String*/
    printf("Address of the pointer of the string is %p \n", str);
    str = malloc(10);
    printf("Malloc. Direction of the string is %p \n", str);
    strcpy(str, "prueba");
    printf("The value of the pointer of the string is %s", *str);
    free(str);
}