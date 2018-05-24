#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char cadena[50]="hola";

    pArchivo=fopen("archivos.txt","w");//w para escribir

    if(pArchivo!=NULL)
       {
          fprintf(pArchivo,"%s--%d" , cadena , 156);//guarda string
          fclose(pArchivo);
          printf("guardado");
       }
       else
       {
            printf("no se puede guardar");
       }


        pArchivo=fopen("archivo.txt","r");//r para leer.
    if(pArchivo!=NULL)
        {

        while(!feof(pArchivo))
            {
                fgets(cadena,50,pArchivo);
                puts(cadena);
            }
            fclose(pArchivo);
        }
        return 0;
}
