#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char **argv) {
    char str[5] = "Hola";
    printf("%s \n", str);
    printf("Sleep for %i seconds \n", atoi(argv[1]));
    sleep(atoi(argv[1]));
    printf("%s", str);
}