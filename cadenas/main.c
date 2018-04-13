#include <stdio.h>
#include <stdlib.h>

int contarPares(int[],int);

int main()
{
    int vector[5]={5,2,4,6,5};
    int cantidad;
    cantidad=contarPares(vector,5);
    printf(" cantidad de pares : %d \n",cantidad) ;
    return 0 ;
}
int contarPares(int array[],int cantidad)
{
    int contadorPares=0;
    int i;

    for (i=0; i<cantidad; i++)
        {
            if (array[i]%2==0)
            {
                contadorPares++;
            }
        }

    return contadorPares;

}
