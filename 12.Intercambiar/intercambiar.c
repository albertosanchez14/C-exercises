#include <stdio.h>
#include <stdlib.h>


void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(int argc, char **argv){
    int n1, n2;
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    printf("The value of the first integer is %i \n", n1);
    printf("The value of the second integer is %i \n", n2);
    printf("Swap \n");
    swap(&n1, &n2);
    printf("The value of the first integer is %i \n", n1);
    printf("The value of the second integer is %i \n", n2);
}