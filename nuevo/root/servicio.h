#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct{
    int id;
    char descripcion[25];
    float precio;
    int isEmpty;

}eServicio;

#endif /* SERVICIO_H_ */

/**
 * @brief	inicializa los servicios colocando los isEmpty en 1
 * @param servicios	array de estructura servicios que desea inicializar
 * @param tamser	tamaño del array de estructura
 */
void inicializarServicios(eServicio servicios[], int tamser);

/**
 * @brief	muestra los servicios del array de estructura
 * @param servicios	array de estructura de servicios que se desea mostrar
 * @param tamser	tamaño del array de estructura
 */
void mostrarServicios(eServicio servicios[], int tamser);
