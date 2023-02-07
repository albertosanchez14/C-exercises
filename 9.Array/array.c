#include <stdio.h>
#include <string.h>


int main(){
    int arr[5];
    int i, num;

    /*Set values for the array*/
    for (i = 0; i < 5; i++)
    {
        printf("Introduce an integer: ");
        scanf("%d", &num);
        arr[i] = num;
    }
    
    /*Print the values of the array*/
    printf("The array is the following: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d \n", arr[4]);
    
}   