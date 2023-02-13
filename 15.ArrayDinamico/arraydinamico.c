#include <stdio.h>
#include <stdlib.h>


int main(){
    int *arr1;
    int size, i, num;

    /*Declare the size of the array*/
    printf("Enter the size of the array: ");
    scanf("%i", &size);
    printf("The size of the array is %i", size);
    arr1 = (int*)malloc(size * sizeof(int));
    
    /*Introduce the integers in the array*/
    for (i = 0; i < (size); i++)
    {
        printf("\n Enter an integer to store in the array: ");
        scanf("%i", &num);
        arr1[i] = num;
    }

    /*Print the array*/
    printf("\nThe array is: ");
    for (i = 0; i < (size - 1); i++)
    {
        printf("%i, ", arr1[i]);
    }
    printf("%i", arr1[size - 1]);
    return 0;
}