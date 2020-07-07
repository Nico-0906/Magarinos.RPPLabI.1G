#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
    int id;
    char descripcion[20];
    int isEmpty;

}eTipo;

#endif /* TIPO_H_ */

/**
 * @brief	muestra los tipos del array de estructura tipos
 * @param tipos	array de estructura que se desea mostrar
 * @param tamtip	tamaño del array
 */
void mostrarTipos(eTipo tipos[], int tamtip);

/**
 * @brief	carga la descripcion de un tipo en el campo descripcion
 * @param descripcion		campo dondde desea cargar la descripcion del tipo
 * @param id		id del tipo que se desea cargar la descripcion
 * @param tipos		array de estructuras tipo
 * @param tamtip	tamaño del array de tipos
 * @return	retorna 0 si fallo o retorna 1 si funciono
 */
int cargarTipo(char descripcion[], int id, eTipo tipos[], int tamtip);
