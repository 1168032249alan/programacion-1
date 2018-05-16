#include <stdio.h>
#include <string.h>
#include "funciones.h"
#include <ctype.h>
#define CANT 3

void inicializarEstadoPersona(ePersona person[],int cantidad){
    for(int i=0;i<cantidad;i++)
{
    person[i].estado = 0;
}
}

int funcionMenu(){
        int opcion;
        system("cls");
        printf("1-Agregar \n");
        printf("2-Borrar \n");
        printf("3-Imprimir lista ordenada por nombre\n");
        printf("4-Grafico\n\n");
        printf("Ingrese opcion: ");
        fflush(stdin);
        opcion = getch();

        return opcion;
}

int obtenerEspacioLibre(ePersona person[],int cantidad){
int indice = -1;
for(int i=0;i<cantidad;i++){
    if(person[i].estado == 0){
        indice =i;
        break;
        }
}
return indice;
}

int buscarXDni(ePersona person[],int cantidad,int dni){
int existe = -1;
for(int i=0;i<cantidad;i++){
    if(person[i].estado == 1 && person[i].dni == dni){
        existe = i;
        break;
        }
}
return existe;
}

void altaPersona(ePersona person[], int cantidad){
system("cls");
int dni;
int existe;
int espacioLibre = obtenerEspacioLibre(person,cantidad);

if(espacioLibre <0){
    printf("NO HAY LUGAR :).\n");
    system("pause");
}else{
    printf("\t--- A l t a   P e r s o n a ---\n\n");
    printf("Ingrese los datos: \n ");
    printf("\nD.N.I: ");
    scanf("%d",&dni);

    existe = buscarPorDni(person,cantidad,dni);

    if(existe == -1)
    {
        person[espacioLibre].dni = dni;
        printf("\nNombre: ");
        fflush(stdin);
        scanf("%[^\n]", person[espacioLibre].nombre);
        printf("\nEdad: ");
        fflush(stdin);
        scanf("%d", &person[espacioLibre].edad);
        person[espacioLibre].estado = 1;
        system("cls");
        printf("Se agrego a la persona con exito!\n");
        printf("Nombre\tedad\tD.N.I\n\n");
        mostrarPersona(person[espacioLibre]);
        system("pause");
    }
    else{
        system("cls");
        printf("ERROR! El dni ingresado ya existe!.\n");
        printf("El dni: %d pertenece a:  \n",dni);
        printf("Nombre\tedad\tD.N.I\n\n");
        mostrarPersona(person[existe]);
        system("pause");
        system("cls");
    }
}
}//

void mostrarPersona(ePersona person){
person.nombre[0]= toupper(person.nombre[0]);
printf("%s\t%d\t%d\n",person.nombre,person.edad,person.dni);
}

void mostrarPersonas(ePersona person[],int cantidad){
    system("cls");
    ordenarPersonas(person,cantidad);
    printf("\t---M o s t r a r   P e r s o n a s---\n");
    printf("Nombre\tedad\tD.N.I\n");
    printf("*****************************\n");
    for(int i=0;i<cantidad;i++){
        if(person[i].estado==1){
        mostrarPersona(person[i]);
        }
    }
    system("pause");
}

void bajaPersona(ePersona person[],int cantidad){
system("cls");
int dni;
char opcion;
int existe;

printf("\t--- B a j a    P e r s o n a ---\n\n");
printf("Para eliminar a una persona, ingrese su D.N.I: ");
scanf("%d",&dni);

existe=buscarPorDni(person,cantidad,dni);

if(existe >= 0){
    printf("Persona encontrada: \n");
    printf("Nombre\tedad\tD.N.I\n");
    mostrarPersona(person[existe]);
    printf("Estas seguro de querer eliminarla del sistema? s/n: ");
    fflush(stdin);
    scanf("%c",&opcion);
    if(opcion == 'n')
    {
        printf("No se completo la baja\n");
        system("pause");

    }
    else
    {
        system("cls");
        printf("\nBaja exitosa!\n");
        printf("%s fue borrado del sistema...\n",person[existe].nombre);
        person[existe].estado = 0;
        system("pause");
    }
}
else{
    printf("ERROR! el dni: %d ingresado no existe!\n\n",dni);
    system("pause");
}
}

void ordenarPersonas(ePersona person[],int cantidad){

ePersona aux;

for(int i=0;i<cantidad-1;i++){
    for(int j=i+1; j<cantidad; j++){
        if(stricmp(person[i].nombre,person[j].nombre)>0){
                aux = person[i];
                person[i] = person[j];
                person[j] = aux;
        }
        else{
            if(stricmp(person[i].nombre,person[j].nombre)==0){
                if(person[i].dni < person[j].dni){
                aux = person[i];
                person[i] = person[j];
                person[j] = aux;
                }
            }
        }
    }
}
}

void graficoPorEdades(ePersona person[], int cantidad){

system("cls");
int bandera = 0;
int mayor;
int menoresDe18 = 0;
int entre19y35 = 0;
int mayoresDe36 = 0;

printf("\t--- G r a f i c o   d e   E d a d e s ---\n\n");

for(int i=0; i<CANT; i++){
    if(person[i].estado == 1){
        if(person[i].edad <= 18){
            menoresDe18++;
        }
        else{
            if(person[i].edad >= 19 && person[i].edad <= 35){
                entre19y35++;
            }
            else{
                mayoresDe36++;
            }
        }
    }
}

if(menoresDe18 >= entre19y35 && menoresDe18 >= mayoresDe36){
        mayor = menoresDe18;
    }
    else{
        if(entre19y35 >= menoresDe18 && entre19y35 >= mayoresDe36){
            mayor = entre19y35;
        }
        else{
            mayor = mayoresDe36;
        }
    }
    for(int i=mayor; i>0; i--){
        if(i <= menoresDe18){
            printf("  *");
        }
        if(i <= entre19y35){
            printf("\t*");
            bandera = 1;
        }
        if(i <= mayoresDe36){
            if(bandera == 0){
                printf("\t\t*");
            }
            else{
                printf("\t*");
            }
        }
        printf("\n");
    }
    printf("<18\t19-35\t36>\n\n");
    system("pause");
}



