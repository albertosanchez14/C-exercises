#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char ** argv) {
    char name[32];
    int age;

    if (argc < 2) 
    {
        printf("There are no arguments");
        exit(-1);
    }

    strcpy(name, argv[1]);
    age = atoi(argv[2]);
    printf("The name is %s and the age is %s", name, age);
}
