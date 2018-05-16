#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {
    char nombre[21];
    int edad;
    int dni;
    int estado;
}ePersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param la cantidad de la matriz necesaria para el for.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona person[],int cantidad);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param la cantidad de la matriz necesaria para el for.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni.
 */
int buscarPorDni(ePersona person[],int cantidad,int dni);

/** \brief Inicializa el estado de todas las personas en 0
 *
 * \param lista el array se pasa como parametro.
 * \param la cantidad de la matriz necesaria para el for.
 * \return void
 *
 */
void inicializarEstadoPersona(ePersona person[],int cantidad);


/** \brief Muestra en pantalla los printf del menu y devuelve el numedo dela opcion
 *
 * \return int devuelve el estero de la opcion seleccionada
 *
 */
int funcionMenu();


/** \brief Agrega a una persona al sistema, pidiendole sus respectivos datos
 *
 * \param pers[] ePersona: lista el array se pasa como parametro.
 * \param cantidad int: la cantidad necesaria para pasarla a la funcion "buscar espacio libre"
 * \return void
 *
 */
void altaPersona(ePersona person[], int cantidad);


/** \brief Muestra los datos de una persona en particular
 *
 * \param lista el array se pasa como parametro.
 * \return retorna el dato de esa persona en particular.
 *
 */
void mostrarPersona(ePersona person);


/** \brief Usa la funcion "mostrar persona" en un for, para mostrarlas todas una debajo de la otra.
 *
 * \param pers[] ePersona lista el array se pasa como parametro.
 * \param cantidad int la cantidad de la matriz se pasa como parametro
 * \return void retorna el printf de las personas con un for y las muestra.
 *
 */
void mostrarPersonas(ePersona person[],int cantidad);


/** \brief Ordena la lista de las personas ingresadas de alfabeticamente y por dni
 *
 * \param pers[] ePersona
 * \param cantidad int
 * \return void
 *
 */
void ordenarPersonas(ePersona person[],int cantidad);



/** \brief muestra un grafico de las personas segun las edades
 *
 * \param pers[] ePersona lista el array se pasa como parametro.
 * \param cantidad int se pasa la cantidad de la matriz como parametro.
 * \return void develve el printf del grafico.
 *
 */
void graficoPorEdades(ePersona person[], int cantidad);
#endif // FUNCIONES_H_INCLUDED
