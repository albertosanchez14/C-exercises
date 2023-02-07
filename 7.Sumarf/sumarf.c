#include <stdio.h>
#include <stdlib.h>


float sum(float f1, float f2){
    float sum;
    sum = f1 + f2;
    return sum;
}


int main (int argc, char **argv){
    float suma; 
    suma = sum(atof(argv[1]), atof(argv[2])); 
    printf("The sum of %.3f and %.3f is %.3f", atof(argv[1]), atof(argv[2]), suma);
}