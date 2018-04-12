int suma(int x, int y)
{
    int resultado;
    resultado = x+y;
    return resultado;
}

int resta(int x, int y)
{
    int resultado;
    resultado = x-y;
    return resultado;
}

int multiplicacion(int x, int y)
{
    int resultado;
    resultado = x*y;
    return resultado;
}

float division(int x, int y)
{
    float resultado;
    resultado = (float)x/y;
    return resultado;
}

long factorial(int x)
{
    int resultado;
    if(x==0)
    {
        resultado=1;
    }
    else
    {
        resultado=x*factorial(x-1);
    }
    return resultado;
}

void operacionesJuntas(int x, int y)
{
    printf("\nLa suma es: %d\n",suma(x,y));
    printf("La resta es: %d\n",resta(x,y));
    if(y==0)
    {
        printf("error!!.\nEl divisor no puede ser cero\n");
    }
    else
    {
        printf("La division es: %.2f\n",division(x,y));
    }
    printf("La multiplicacion es: %d\n",multiplicacion(x,y));
    if(x<0)
    {
        printf("error!!.\n El numero no puede ser menor a cero \n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}

int validarElRango(int opcion, int desde, int hasta)
{
    int resultado=0;
    if((opcion >= desde)&&(opcion <= hasta))
        {
            resultado = 1;
        }
    return resultado;
}

int validarLaDivision (int x, int y)
{
    if(y==0)
    {
        printf("\n error !!, el divisor no puede ser cero\n");
    }
    else
    {
        printf("La division es: %.2f\n",division(x,y));
    }
}

int validarElFactorial (int x, int y)
{
    if(x<0)
    {
        printf("\n error!!.\nEl numero no puede ser menor a cero\n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}
