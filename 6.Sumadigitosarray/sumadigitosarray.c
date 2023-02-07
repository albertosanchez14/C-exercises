#include <stdio.h>
#include <stdlib.h>


int main (int argc, char **argv){
    int vector[10];
    int suma = 0;
    int i;

    /*Initializes the array vector with the argument*/
    for (i = 0; i < 10; i++){
        vector[i] = atoi(argv[1]);
    }

    /*Sum with for loop*/
    for (i = 0; i < 10; i++){
        suma += vector[i];
    }
    printf("The sum with the for loop is: %d \n", suma);

    suma = 0;
    i = 0;

    /*Sum with wile loop*/
    while (i != 10)
    {       
        suma += vector[i];
        i++;
    }
    printf("The sum with the while loop is: %d", suma);
}
