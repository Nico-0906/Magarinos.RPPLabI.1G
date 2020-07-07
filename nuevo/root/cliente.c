#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "cliente.h"


int cargarCliente(char nombre[], int id, eCliente clientes[], int tamcli){
    int retorno = 0;
    for(int i = 0; i < tamcli ; i++){
        if(clientes[i].id == id){
            strcpy(nombre, clientes[i].nombre);
            retorno = 1;
        }
    }
    return retorno;
}

void mostrarCliente(eCliente clientes, int tamcli){
	printf("%2d     %10s      %c \n", clientes.id, clientes.nombre, clientes.sexo);
}

void mostrarClientes(eCliente clientes[], int tamcli){
	int aux = 0;

	system("cls");
	printf("****** Clientes ******\n\n");
	printf("ID       NOMBRE       SEXO\n");
	for(int i = 0 ; i < tamcli ; i++){
		if(clientes[i].isEmpty == 0){
			mostrarCliente(clientes[i], tamcli);
			aux = 1;
		}
	}

	if(aux == 0){
		printf("\nNO HAY CLIENTES CARGADOS.");
		fflush(stdin);
		getchar();
	}
}

int buscarClientes(int id, eCliente clientes[], int tamcli){
	int retorno = -1;


	for(int i = 0 ; i < tamcli ; i++){
		if(clientes[i].id == id){
			retorno = i;
			break;
		}
	}
	return retorno;
}

void inicializarClientes(eCliente clientes[], int tamcli){
	for(int i = 0 ; i < tamcli ; i++){
		clientes[i].isEmpty = 1;
	}
}
