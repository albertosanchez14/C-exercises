#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    char *name;
    float *grades;
} notasalumno;

float request_notes();

int main() {
    int students, i;
    float grades[3], *grades;
    char *name;

    printf("Introduce the number of students: ");
    scanf("%i", &students);
    printf("The number of students is %i", students);

    for (i = 0; i < students; i++)
    {
        notasalumno * alumno;
        notasalumno * alumno = (notasalumno*)malloc(sizeof(notasalumno));
        
        printf("Introduce the name of student %i: ", i);
        scanf("%s", &name);
        alumno -> name = &name;
        grades[i] = request_notes();
    }
    


    return 0;
}

float request_notes() {
    float notes[3]; 
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Introduce a mark: ");
        scanf("%f", &notes[i]);
    }
    
    return notes;
}