#include <stdio.h>
#include <string.h>


int main() {
    char nombre[32];

    printf("Write the name: ");
    scanf("%s", nombre);

    printf("Hola %s \n", nombre);
}