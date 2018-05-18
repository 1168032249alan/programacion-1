#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a ;
    char b;

}dato;
int main()
{
    //dato d;
    //d.a=5;
    //d.b='<';

    //printf("TAM.%d\n",sizeof(long));//para ver el tamaño
    //printf("%d--%c",d.a,d.b);

    //dato* pDato;
    //pDato=&d;

    //printf("%d--%c\n",pDato->a,pDato->b);

    int i,
    dato l[2]={ {1,'a'},{1,'b'}};
    dato* pLista;

    pLista=1;

    for(i=0;i<2;i++)
        {

            printf("%d--%c\n",(*(pLista+i).a)*(pLista+i).b);
            printf("%d--%c\n",(*(pLista+i)->a)*(pLista+i)->b);
        }
    return 0;
}
