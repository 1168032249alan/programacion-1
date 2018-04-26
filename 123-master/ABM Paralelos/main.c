#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno( legajo,nombre,nota1,nota2,promedio,TAM);
            printf("%d",index);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:

        mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM );

        break;
        }

    }
    while(opcion!=9);

    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index=0;
    int i;
    for(i=0;i<tam;i++)
       {
            if(legajos[i]!=tam)
                {
                    return i;

                }
       }

    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("ingrese nombre: \n");
                scanf("%s",&nombres);
                printf("ingrese legajo:\n");
                scanf("d",&legajos);
                printf("ingrese nota 1:\n");
                scanf("d",&nota1);
                printf("ingrese nota 2:\n");
                scanf("d",&nota2);
            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
