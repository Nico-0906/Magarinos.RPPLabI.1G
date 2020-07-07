#ifndef MOTO_H_
#define MOTO_H_

#include "gomeria.h"

typedef struct{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int idCliente;
    int idGomeria;
    int cilindrada;
    int isEmpty;

}eMoto;

#endif /* MOTO_H_ */


/**
 * @brief		lista todas las motos del array motos
 * @param motos	array de estructura que se desea listar
 * @param tammot	tamaño del array de estruycturas
 * @param tipos		array de estructura tipos
 * @param tamtip	tamaño del array de tipos
 * @param colores	array de estructura colores
 * @param tamcol	tamaño del array de colores
 * @param clientes	array de estructura de clientes
 * @param tamcli	tamaño del array de clientes
 */
void listarMotos(eMoto motos[] , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	muestra una sola moto individualmente
 * @param motos	array de estructura que se desea listar
 * @param tammot	tamaño del array de estruycturas
 * @param tipos		array de estructura tipos
 * @param tamtip	tamaño del array de tipos
 * @param colores	array de estructura colores
 * @param tamcol	tamaño del array de colores
 * @param clientes	array de estructura de clientes
 * @param tamcli	tamaño del array de clientes
 */
void mostrarMoto(eMoto motos , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	modifica una moto seleccionada por el usuario
 * @param motos	array de estructura que se desea listar
 * @param tammot	tamaño del array de estruycturas
 * @param tipos		array de estructura tipos
 * @param tamtip	tamaño del array de tipos
 * @param colores	array de estructura colores
 * @param tamcol	tamaño del array de colores
 * @param clientes	array de estructura de clientes
 * @param tamcli	tamaño del array de clientes
 */
void modificarMoto(eMoto motos[], int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	carga la cilindrada de una moto
 * @return	retorna la cilindrada de la moto indicada
 */
int cargarCilindrada();

/**
 * @brief	busca un indice de moto libre con campo isEmpty en 1
 * @param motos		array de estructura de motos
 * @param tammot	tamaño del array de motos
 * @return		retorna el indice libre
 */
int buscarLibreMoto(eMoto motos[], int tammot);

/**
 * @brief		busca una moto segun el id ingresado
 * @param id		id de moto a buscar
 * @param motos		array de motos
 * @param tammot	tamaño del array motos
 * @return		retorna el indice de la moto buscada por id
 */
int buscarMoto(int id, eMoto motos[], int tammot);

/**
 * @brief		da de alta una nueva moto
 * @param idMoto	id que se le asignara a la nueva moto
 * @param motos	array de estructura que se desea listar
 * @param tammot	tamaño del array de estruycturas
 * @param tipos		array de estructura tipos
 * @param tamtip	tamaño del array de tipos
 * @param colores	array de estructura colores
 * @param tamcol	tamaño del array de colores
 * @param clientes	array de estructura de clientes
 * @param tamcli	tamaño del array de clientes
 * @return retorna 0 si fallo y 1 si funciono con exito
 */
int altaMoto(int idMoto, eMoto motos[], int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	realiza la baja de una moto dentro del array indicado
 * @param motos	array de estructura que se desea listar
 * @param tammot	tamaño del array de estruycturas
 * @param tipos		array de estructura tipos
 * @param tamtip	tamaño del array de tipos
 * @param colores	array de estructura colores
 * @param tamcol	tamaño del array de colores
 * @param clientes	array de estructura de clientes
 * @param tamcli	tamaño del array de clientes
 * @return retorna 0 si fallo la baja o 1 si realizo la baja con exito
 */
int bajaMoto(eMoto motos[] , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	inicializa las motos colocando todos los campos isEmpty en 1
 * @param motos		array de motos que se desea inicializar
 * @param tammot	tamaño del array de motos
 */
void inicializarMoto(eMoto motos[], int tammot);
