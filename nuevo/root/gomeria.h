#ifndef GOMERIA_H_
#define GOMERIA_H_

typedef struct{
    int id;
    char marcaCubierta[20];
    char marcaLlanta[20];
    float precio;
    int isEmpty;

}eGomeria;

#endif /* GOMERIA_H_ */

/**
 * @brief busca el indice de la estructura del array segun el id del indicado
 * @param id		id de la estructura a buscar el indice
 * @param gomeria	array de estructura donde busccar el indice
 * @param tamgom	tamaño del array
 * @return		retorna el indice de la estructura con el id indicado
 */
int buscarIndiceGomeria(int id, eGomeria gomeria[], int tamgom);

/**
 * @brief 	carga el nombre de la marca de la llanta indicada en el campo descripcion
 * @param descripcion	campo donde se va a guardar el nombre de la marca
 * @param id	id del servicio de gomeria donde buscar la descripcion de la llanta
 * @param gomeria	array de estructura donde buscar
 * @param tamgom	tamaño del array de estructura gomeria
 * @return 	retorna 0 si falla y 1 si sale bien
 */
int cargarMarcaLlanta(char descripcion[], int id, eGomeria gomeria[], int tamgom);

/**
 * @brief 	carga el nombre de la marca de la cubierta indicada en el campo descripcion
 * @param descripcion	campo donde se va a guardar el nombre de la marca
 * @param id	id del servicio de gomeria donde buscar la descripcion de la cubierta
 * @param gomeria	array de estructura donde buscar
 * @param tamgom	tamaño del array de estructura gomeria
 * @return 	retorna 0 si falla y 1 si sale bien
 */
int cargarMarcaCubierta(char descripcion[], int id, eGomeria gomeria[], int tamgom);

/**
 * @brief  	inicializa el array de estructura poniendo en 1 todos los isEmpty
 * @param gomeria	array de estructura que se quiere inicializar
 * @param tamgom	tamaño del array
 */
void inicializarGomeria(eGomeria gomeria[], int tamgom);

/**
 * @brief 	muestra el listado del array de estructura gomeria
 * @param gomeria	array de estructura a listar
 * @param tamgom	tamaño del array de estructura a listar
 */
void mostrarTodoGomeria(eGomeria gomeria[], int tamgom);

/**
 * @brief 	muestra una estructura
 * @param gomeria	estructura a mostrar
 */
void mostrarGomeria(eGomeria gomeria);
