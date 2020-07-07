#ifndef INFORMES_H_
#define INFORMES_H_

#include "moto.h"
#include "trabajo.h"

#endif /* INFORMES_H_ */
/**
 * @brief	obtiene la  cantidad de motos de x color
 * @param colores	color a buscar dentro de la estructura motos
 * @param motos		array de estructura motos donde buscar por el color elegido
 * @param tammot	tamaño del array de estructura motos
 * @return
 */
int obtenerTotalMotosDeColor(eColor colores, eMoto motos[], int tammot);

/**
 * @brief	muestra cuales son los colores con mas motos y cuantas motos de esos colores
 * @param colores	array de estructura de colores
 * @param tamcol	tamaño de array de colores
 * @param motos		array de estructura de motos
 * @param tammot	tamaño de array de motos
 * @param tipos		array de tipos de motos
 * @param tamtip	tamaño del array de tipos de motos
 */
void mostrarColorConMasMotos(eColor colores[], int tamcol, eMoto motos[], int tammot, eTipo tipos[], int tamtip);

/**
 * @brief			selecciona un tipo de moto y un color y muestra las motos de los sectores elegidos
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
void motosPorColorTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief		separa las motos y las lista por tipo
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
void motosSeparadasTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	muestra las motos que tienen la mayor cilindrada
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
void motosMayorCilindrada(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	ordena las motos por los servicios de gomeria mas caro
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
 * @param gomeria	array de estructura gomeria
 * @param tamgom	tamaño del array de gomerias
 */
void motosPorGomeriaMasCaro(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	ordena las motos por menor cilindrada
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
 * @param gomeria	array de estructura gomeria
 * @param tamgom	tamaño del array de gomerias
 */
void OrdenarCilindrada(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	ordena las motos y las lista por el servicio de gomeria
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
 * @param gomeria	array de estructura gomeria
 * @param tamgom	tamaño del array de gomerias
 */
void motosOrdenadasPorServicioGom(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	indica cantida de motos de gomeria ingresadas
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
 * @param gomeria	array de estructura gomeria
 * @param tamgom	tamaño del array de gomerias
 */
void cantidadMotosGomeria(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief		ordena las motos por el precio de gomeria
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
 * @param gomeria	array de estructura gomeria
 * @param tamgom	tamaño del array de gomerias
 */
void OrdenarPrecioGom(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	selecciona un tipo de moto y las lista segun el tipo elegido
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
void motosPorTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief  selecciona un color de moto y las lista segun el color elegido
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
void motosPorColor(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);

/**
 * @brief	lista el menu de informes
 * @return	retorna el valor elegido por el usuario
 */
int menuInforme();

/**
 * @brief	parte interna del menu de informes con el switch
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
 * @param gomeria	array de tipos de gomeria
 * @param tamgom	tamaño del array de tipos de gomeria
 */
void informesMotos(eMoto motos[], int tammot, eColor colores[], int tamcol, eServicio servicios[], int tamser, eTipo tipos[], int tamtip, eTrabajo trabajos[], int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom);
