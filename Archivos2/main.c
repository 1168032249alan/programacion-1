#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE * miArchivo;
    int numero=64;

    miArchivo=fopen("prueba1.txt","w");
    //&NUMERO PUNTERO DEL DATO , SIZEOF DEVUELVE EL PESO DEL DATO EN BYTES.EL 1 SIGNIFICA LA CANTIDAD DE DATOS QUE VA A GUARDAR.
    fwrite(&numero,sizeof(int),1,miArchivo);//PERMITE ESCRIBIR TEXTO Y CUALQUIER TIPO DE DATO, INCLUSIVE ESTRUCTURAS ADAPTADO PARA ESCRIBIR EN BINARIO.

    fclose(miArchivo);

    miArchivo=fopen("prueba1.txt","r");

    fread(&numero,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    printf("NUMERO: %d", numero);*/
}

/*int funciona()
{
    int i;
    int numero;
    int lista[5];
    FILE* miArchivo;

    miArchivo=fopen("prueba2.txt","w");

    for(i=0;i<5;i++)
        {
            printf("ingrese un numero");
            scanf("%d",numero);

            fwrite(&numero,sizeof(int),1,miArchivo);//escribe en binario
        }
        while(!feof(miArchivo))
            {
                //    fread(&lista[i],sizeof(int),1,miArchivo);
               if(feof(miArchivo))
                {
                   break;
                }
                  fread(&numero,sizeof(int),1,miArchivo);
                  printf("%d\n",numero);

                  i++;
            }
        return 0;
}

int funciona2a()
{
    int i;
    int lista[5];
    FILE * miArchivo;
    miArchivo=fopen("prueba2.txt","w");

    i=0;
    while(!feof(miArchivo))
        {
            fread(&numero,sizeof(int),1,miArchivo);
            if(feof(miArchivo))
                {
                    break;
                }
            printf("NUMERO:%d", numero);
            i++;
        }
        fread(lista,sizeof(int),1,miArchivo);
        fclose(miAchivo);

        for(i=0;i<5;i++)
            {
                printf("%d\n",lista[i]);
            }
}*/

void funciona3b()
{
    typedef struct
    {
        int a;
        char b;
    }eDato;

    FILE* miArchivo;
    eDato d ={1,'b'};
    miArchivo=fopen("miBinario.dat","wb");

    if(miArchivo!=NULL)
        {
            fwrite(&d,sizeof(eDato),1,miArchivo);
            fclose(miArchivo);

            printf("%d--%c",d.a,d.b);
        }
}

