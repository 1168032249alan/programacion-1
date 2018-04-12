#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x=0;
    int y=0;

    do{

        printf("\n");
        printf("1.Ingresar primer numero  (A=x)\n");
        printf("2.Ingresar Segundo numero (B=y)\n");
        printf("3.Calcular  suma (A+B)\n");
        printf("4.Calcular  resta (A-B)\n");
        printf("5.Calcular  multiplicacion(A*B)\n");
        printf("6.Calcular  division (A/B)\n");
        printf("7.Calcular  factorial (A!)\n");
        printf("8.Calcular las operaciones\n");
        printf("9.Salir\n");
        printf("A=%d\nB=%d\n", x, y);
        printf("Ingrese una opcion: ");

        scanf("%d",&opcion);

        while(!validarElRango(opcion,1,9))
        {
            printf("\nIngrese una opcion valida: ");
            scanf("%d", &opcion);
        }
        switch(opcion)
        {
            case 1:
                printf("\nIngrese un numero: ");
                scanf("%d", &x);
                break;

            case 2:
                printf("\nIngrese segundo numero: ");
                scanf("%d", &y);
                break;

            case 3:
                printf("\nLa suma es: %d\n\n",suma(x,y));
                break;
            case 4:
                printf("\nLa resta es: %d\n\n",resta(x,y));
                break;

            case 5:
                validarLaDivision(x,y);
                break;

            case 6:
                printf("\nLa multiplicacion es: %d\n",multiplicacion(x,y));
                break;

            case 7:
                validarElFactorial(x,y);
                break;

            case 8:
                operacionesJuntas(x,y);
                break;

            case 9:
                seguir = 'n';
                break;

            default:
                break;
        }
    }while(seguir=='s');
    return 0;
}
