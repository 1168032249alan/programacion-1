#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char calle[50];
    int numero;
    char localidad;
    int piso;
    char dpto[20];
    int cp;

}eDomicilio;
typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;
}eAlumno;
int main()
{
    eAlumno miAlumno;

    miAlumno.legajo=400;
    miAlumno.domicilio.cp=1870;
    printf("legajo: %d-- cp:%d ",miAlumno.legajo,miAlumno.domicilio.cp);

    return 0;
}
