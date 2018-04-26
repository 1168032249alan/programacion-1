#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5
typedef  struct
{
    int legajo;
    char nombre[50];
    float promedio;

}eAlumno;

void mostrarTodos(eAlumno[],int);
int main()
{

    eAlumno miAlumno = {1,"juan",3.25};
    eAlumno otroAlumno;

    otroAlumno.legajo=2;
    strcpy(otroAlumno.nombre,"Maria");
    otroAlumno.promedio=6;

    int i ;

    for (i=0;i<T;i++)
    {
        printf("ingrese legajo:");
        scanf("%d",&miAlumno.legajo);
        printf("ingrese nombre:");
        fflush(stdin);
        gets(miAlumno.nombre);
        printf("ingrese promedio:");
        scanf("%f",&miAlumno.promedio);

    }

    mostrarunAlumno(miAlumno);
    mostrarunAlumno(otroAlumno);

    return 0;

}


void mostrarunAlumno(eAlumno unAlumno)
{
    printf("%d -- %s -- %f \n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}

void mostrarTodo(eAlumno[],int)
{
    for(i=0;i<T;i++)
        {
            printf("%d -- %s -- %f \n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio)
        }

}
