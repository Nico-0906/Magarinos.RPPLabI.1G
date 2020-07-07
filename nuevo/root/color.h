#ifndef COLOR_H_
#define COLOR_H_

typedef struct{
    int id;
    char nombreColor[20];
    int isEmpty;

}eColor;

#endif /* COLOR_H_ */

/**
 * @brief	muestra los colores que existen en el array
 * @param colores	array de estructuras eColor a mostrar
 * @param tamcol	tamaño del array
 */
void mostrarColores(eColor colores[], int tamcol);
/**
 * @brief		carga la descripcion de un color en la variable char descripcion
 * @param descripcion	variable donde se va a cargar el nombre del color
 * @param id		id del color a cargar en la descripcion
 * @param colores	array de estructuras eColor
 * @param tamcol	tamaño del array de estructuras
 * @return			retorna 0 si fallo o 1 si cargo con exito
 */
int cargarColor(char descripcion[], int id, eColor colores[], int tamcol);
