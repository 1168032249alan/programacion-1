#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
}ePersona;
//getters/setter:(encapsula los datos setter(setea un campo))
//stack/pila:(es Estatica, va variando cuando termine el marco de la funcion).
//
//heap/monton:(reserva espacio en memoria y lo libera segun se necesite)(datos).

int ePersona_setId(ePersona*,int );
int ePersona_setNombre(ePersona*,char*);
int ePersona_getId(ePersona*);
char* ePersona_getNombre(ePersona*);

int main()
{
    //malloc:(devuelve puntero a void)
    /*ePersona* pPersona;
    pPersona= (ePersona*) malloc(sizeof(ePersona));//se reserva el espacio en memoria y dependiendo del dato se pasa(int , float , etc).
    printf("\n %d",&pPersona);
    printf("\n %d",pPersona);*/
    int id;
    char nombre[50];
    ePersona*pPersona;
    pPersona=malloc(sizeof(ePersona));

    if(pPersona!=NULL)
        {
            printf("ingrese id:");
            scanf("%d",&id);

               if(ePersona_setId(pPersona,id)==-1)
                {
                    printf("error ingrese id correctamente");
                }
                }else
                {
                    printf("ingrese nombre:");
                    scanf("%s",nombre);
                }
                if(ePersona_setNombre(pPersona,nombre)==-1)
                    {
                        printf("NOMBRE INCORRECTO");
                    }else
                    {
                         printf("%d--%s",pPersona->id,pPersona->nombre);
                    }
                    return 0;
        }


int ePersona_setId(ePersona* this,int id)
{
    int retorno=-1;
    if(this!= NULL && id>0)
        {
            retorno=1;
            this->id=id;
        }

}
int ePersona_setNombre(ePersona* this,char* nombre)
{
    int retorno=-1;
    if(this!= NULL && (strlen(nombre)>3)&& nombre!=NULL)
        {
            retorno=1;
            strcpy(this->nombre,nombre);
        }
    return retorno;
}

int ePersona_getId(ePersona*this)
{
    int retorno=-1;
    if(this!=NULL)
        {
            retorno=this->id;
        }
    return retorno;
}

char* ePersona_getNombre(ePersona*this)
{
    char retorno=NULL;
    if(this!=NULL)
        {
            retorno=this->nombre;
        }
    return retorno;
}



