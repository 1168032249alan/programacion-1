#include <stdio.h>
#include <stdlib.h>
int contarPares(int[],int);
/**\brief determina si un caracter esta en array
*
*\param char[] coleccion de caracteres
*\param int tamaño
*\param char caracter a buscar
*\return int -1 si no lo encuentra o el indice del valor encontrado
*/
int buscarChar(char[],int,char);

int main()
{
    int vector [6]={5,2,7,5,2,9};
    char letras[5]={'a' ,'b' ,'c' ,'f','h'};
    int cantidad;
    int indexletra;

    cantidad=contarPares(vector,6);
    indexletra=buscarChar(letras,6,'a');
    printf("cantidad de pares: %d", cantidad);
    printf("\n carecter :%c",indexletra);

    if(indexletra==-1)
        {
            printf("no se encontra el caracter");
        }else
        {
            printf("el caracter se encuentra en el array");
        }
        return 0;
}
int buscarChar(char array[],int cantidad,char caracter)
{
        int index=-1;
        int i;
        for(i=0 ;i<cantidad;i++)
            {
                if (array[i]==caracter)
                    {
                        index=i;
                        break;
                    }
            }
        return index;
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
            return contadorPares;
        }
}

