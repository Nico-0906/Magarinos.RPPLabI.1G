#ifndef TRABAJO_H_
#define TRABAJO_H_

typedef struct{
    int id;
    int idMoto;
    int idServicio;
    eFecha fecha;
    int isEmpty;

}eTrabajo;

#endif /* TRABAJO_H_ */

/**
 * @brief			carga el nombre de un servicio indicado en el campo nombreServicio
 * @param nombreServicio	campo donde se cargara el nombre del id indicado
 * @param id	 id del servicio que se desea cargar el nombre
 * @param servicios		array de estructura servicios donde buscar el nombre
 * @param tamser		tamaño del array servicios
 * @return		retorna 0 si fallo y 1 si funciono correctamente
 */
int cargarServicio(char nombreServicio[], int id, eServicio servicios[], int tamser);

/**
 * @brief		carga el nombre de una moto indicada en el campo nombreMarca
 * @param nombreMarca		campo donde se cargara el nombre de la moto
 * @param id		id de la moto que se desea cargar el nombre
 * @param motos		arraytt de estructura motos donde buscar
 * @param tammot	tamaño del array de estructuras motos
 * @return		retorna 0 si fallo y 1 si funciono
 */
int cargarMoto(char nombreMarca[], int id, eMoto motos[], int tammot);

/**
 * @brief	muestra un trabajo indicado
 * @param trabajos	estructura de trabajos que se desea mostrar
 * @param motos		array de estructura motos
 * @param tammot	tamaño del array motos
 * @param servicios	array de servicios
 * @param tamser	tamaño del array servicios
 */
void mostrarTrabajo(eTrabajo trabajos, eMoto motos[], int tammot, eServicio servicios[], int tamser);

/**
 * @brief	lista todos los trabajos en el array de estructura indicado
 * @param trabajos	array de estructura quie se desea listar
 * @param tamtra	tamaño del array de trabajos
 * @param motos		array de estructura motos
 * @param tammot	tamaño del array motos
 * @param servicios	array de servicios
 * @param tamser	tamaño del array servicios
 */
void listarTrabajos(eTrabajo trabajos[], int tamtra, eMoto motos[], int tammot, eServicio servicios[], int tamser);

/**
 * @brief	busca un indice libre para nuevo trabajo que tenga isEmpty en 1
 * @param trabajos	array de estructura donde buscar el indice libre
 * @param tamtra	tamaño del array de estructura
 * @return	retorna el indice donde cargar el proximo trabajo
 */
int buscarLibreTrabajo(eTrabajo trabajos[], int tamtra);

/**
 * @brief		da de alta un trabajo
 * @param id	id que se le va a otorgar al proximo trabajo dado de alta
 * @param motos		array de estructura de motos
 * @param tammot	tamaño de array de motos
 * @param colores	array de estructura de colores
 * @param tamcol	tamaño de array de colores
 * @param servicios	array de estructura de servicios
 * @param tamser	tamaño del array de servicios
 * @param tipos		array de tipos de motos
 * @param tamtip	tamaño del array de tipos de motos
 * @param trabajos	array de tipos de trabajos
 * @param tamtra	tamaño del array de tipos de trabajos
 * @param clientes	array de tipos de clientes
 * @param tamcli	tamaño del array de tipos de clientes
 */
int altaTrabajos(int id, eMoto motos[], int tammot, eColor colores[], int tamcol, eServicio servicios[], int tamser, eTipo tipos [], int tamtip, eTrabajo trabajos[], int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	inicializa los trabajos colocando los isempty en 1
 * @param trabajos		array de estructura trabajos que se desea inicializar
 * @param tamtra	tamaño del array de estructura
 */
void inicializarTrabajos(eTrabajo trabajos[] ,int tamtra);
