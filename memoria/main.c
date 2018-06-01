#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
  int* pVector;
  int i;
  int aux;
  pVector=(int*)malloc(sizeof(int)*TAM);

  if(pVector!=NULL)
    {
        for(i=0;i<TAM;i++)
        {
            *(pVector+i)=i+1;
        }
        for(i=0;i<TAM;i++)
            {
                printf("%d\n",*(pVector+i));
            }
        aux= (int*) realloc(pVector,sizeof(int)*10);
        if(aux!=NULL)
            {
                pVector=aux;
                for(i=TAM;i<TAM*2;i++)
                    {
                        *(pVector+i)=i+1;
                    }
                    printf("LUEGO DEL REALLOC: \n");

                    for(i=0;i<TAM*2;i++)
                    {
                        printf("%d \n",*(pVector+i));
                    }
               aux=(int*)realloc(pVector,sizeof(int)*TAM*2);
               if(aux!=NULL)
                {
                    printf("LUEGO DEL REALLOC POR MENOS : \n");

                    for(i=0;i<4;i++)
                        {
                            printf("%d \n",*(pVector+i));
                        }
                }
            }
            free(aux);
    }
    return 0;
}
//Realloc reasigna espacio en memoria
