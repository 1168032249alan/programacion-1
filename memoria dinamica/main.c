#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    FILE *fp;

    char buffer[100]="Esto es un texto dentro del fichero.";
    char bufferIn[100];

    fp=fopen("D:\\clase\\fichero.txt", "w");

    fprintf(fp,buffer);
    fprintf(fp,"s","\n Esto es un texto dentro del fichero.");
    fprintf(fp,"\n Esto es otro texto dentro del fichero y el buffer continua .");

    fclose(fp);
    system("pause");
    system("cls");

    fp=fopen("D:\\clase\\fichero.txt","r");

    if(fp==NULL)
        {
         printf("archivo no encontrado!!!");
        }else
        {
            while(!feof(fp))
                {
                    fgets(bufferIn,100,fp);
                    puts(bufferIn);
                }
            fgets(bufferIn,100,fp);
            puts(bufferIn);
        }
    return 0;
}
