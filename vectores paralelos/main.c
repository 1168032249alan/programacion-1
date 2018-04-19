#include <stdio.h>
#include <stdlib.h>

float calcularPromedios (int,int);

int main()
{
    int legajos[3];
    char nombres[3] [30];
    int nota1[3];
    int nota2[3];
    float promedios[3];

    int i;

    for(i=0;i>3;i++)
        {
            printf("el legajo es:" );
            scanf("%d",&legajos[i]);

            printf(" el nombre  es :");
            fflush(stdin);

            gets(nombres[i]);

            printf("nota1 es");
            scanf("%d",&nota1[i]);

            printf("nota2 es :");
            scanf("%d",&nota2[i]);


            promedios[i]=calcularPromedios(nota1[i],nota2[i]);

        }
            for(i=0;i<3;i++)
            {
                printf("%d %s %d %d %.2f\n",legajos[i],nombres[i],nota1[i],nota2[i],promedios[i]);
            }
return 0;

}
    float promedios(int nota1,int nota2)
    {
        float promedios;
        promedios= (float)(nota1+nota2)/2;

        return promedios;
    }

