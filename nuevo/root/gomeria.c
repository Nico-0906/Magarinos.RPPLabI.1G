#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "gomeria.h"

int buscarIndiceGomeria(int id, eGomeria gomeria[], int tamgom){
    int retorno = -1;
    for(int i = 0 ; i < tamgom ; i++){
        if(gomeria[i].id == id && gomeria[i].isEmpty == 0){
            retorno = i;
            break;
        }
    }

    return retorno;
}

int cargarMarcaLlanta(char descripcion[], int id, eGomeria gomeria[], int tamgom){
    int retorno = 0;
    for(int i = 0; i < tamgom ; i++){
        if(gomeria[i].id == id){
            strcpy(descripcion, gomeria[i].marcaLlanta);
            retorno = 1;
        }
    }
    return retorno;
}

int cargarMarcaCubierta(char descripcion[], int id, eGomeria gomeria[], int tamgom){
    int retorno = 0;
    for(int i = 0; i < tamgom ; i++){
        if(gomeria[i].id == id){
            strcpy(descripcion, gomeria[i].marcaCubierta);
            retorno = 1;
        }
    }
    return retorno;
}

void inicializarGomeria(eGomeria gomeria[], int tamgom){
     for(int i = 0 ; i < tamgom ; i++){
        gomeria[i].isEmpty = 1;
     }
}

void mostrarTodoGomeria(eGomeria gomeria[], int tamgom){
    system("cls");
    printf("**** Cubiertas y llantas de moto ****\n\n");
    printf(" ID      Marca Cubierta       Marca Llanta    Precio \n\n");

    for(int i = 0 ; i < tamgom ; i++){
        if(gomeria[i].isEmpty == 0){
            mostrarGomeria(gomeria[i]);
        }
    }
}

void mostrarGomeria(eGomeria gomeria){
	printf("%d        %12s       %12s   %.2f\n", gomeria.id, gomeria.marcaCubierta, gomeria.marcaLlanta, gomeria.precio);
}

