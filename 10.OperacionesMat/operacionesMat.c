#include <stdio.h>
#include <math.h>


void main(int argc, char **argv){
    int dividend = atof(argv[1]);
    int divisor = atof(argv[2]);

    /*Quotient*/
    int num = dividend / divisor;
    printf("The quotient is %d \n", num);

    /*Remainder*/
    num = dividend % divisor;
    printf("The remainder is %d \n", num);

    /*Square root*/
    float sqr = sqrt((double)dividend);
    printf("The square root is %f \n", sqr);

    /*Rounding*/
    float div = dividend / divisor;
    printf("The upper rounding is %f and the lower rounding is %f", ceil(div), floor(div));
}