#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct{
    int id;
    char nombre[20];
    char sexo;
    int isEmpty;

}eCliente;

#endif /* CLIENTE_H_ */
/**
 * @brief carga el nombre del cliente especificado en el char nombre[]
 * @param nombre cadena donde se guardara el nombre
 * @param id	id del cliente
 * @param clientes	tipo de estructura utilizada
 * @param tamcli	tamaño del array de la estructura
 * @return	retorna 0 si fallo o 1 si copio el nombre con exito
 */
int cargarCliente(char nombre[], int id, eCliente clientes[], int tamcli);
/**
 * @brief	 muestra un cliente
 * @param clientes	estructura del cliente a mostrar
 * @param tamcli	tamaño de estructura
 */
void mostrarCliente(eCliente clientes, int tamcli);
/**
 * @brief	muestra todos los clientes en el array de la estructura especificada
 * @param clientes	array de estructuras a mostra
 * @param tamcli	tamaño del array de estructuras
 */
void mostrarClientes(eCliente clientes[], int tamcli);
/**
 * @brief	busca un cliente a travez del indice especificado
 * @param id	id del cliente a buscar
 * @param clientes	array de estructuras clientes donde buscar
 * @param tamcli	tamaño del array de estructura
 * @return			retorna el indice del cliente buscado por id
 */
int buscarClientes(int id, eCliente clientes[], int tamcli);
/**
 * @brief	inicializa los clientes colocando isEmpty en 1
 * @param clientes	array de estructuras eCliente a inicializar
 * @param tamcli	tamaño del array
 */
void inicializarClientes(eCliente clientes[], int tamcli);
