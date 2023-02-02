#include <stdio.h>


int main () {
    int int_small;
    long int int_big;
    float float1;
    
    printf ("; %ld;  ; %4ld;  ; %-4ld;  ; %6.4ld;  ; %2d; \n", int_small, int_small, int_small, int_small, 111);
	printf ("; %f;  ; %9f;  ; %-9f;  ; %9.4f;  ; %2f;  \n", float1, float1, float1, float1, 111);
	printf ("; %c;  ; %s;  ; %7s;  ; %-7s;  ; %7.4s; \n", 'a', "uno", "dos", "tres", "cuatro");

    printf("Write to integers separated by a ',' \n");
    scanf("%d; %ld", &int_small, &int_big);
    printf("; %d; ; %ld;", int_small, int_big);
}