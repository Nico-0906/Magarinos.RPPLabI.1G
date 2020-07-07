#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "herramientas.h"


int getNombre(char nombre[], int tam){
    int retorno = 0;
    char auxCadena[tam];

    fflush(stdin);
    getStr(auxCadena, tam);


    for(int i= 0; nombre[i] != '\0' ; i++){
        if(!((auxCadena[i] > 64 && auxCadena[i] < 91) || (auxCadena[i] > 96 && auxCadena[i] < 123) || (auxCadena[i] > 127 && auxCadena[i] < 167))){
            printf("Error en cadena entrante. SOLO LETRAS \n");
            getchar();
            retorno = 1;
            break;
        }
    }
    if(retorno == 0){
        tipoNombre(auxCadena, tam);
        strcpy(nombre, auxCadena);
    }
    return retorno;
}

int validarOpcion(int max, int min,char mensaje[], char mensajeError[]){
    int retorno;
    int bucle = 1;
    int opcion;

    printf("%s", mensaje);

    while(bucle == 1){
        scanf("%d", &opcion);

        if(opcion <= max && opcion >= min){
            retorno = opcion;
            bucle = 0;
        }else{
            printf("%s", mensajeError);
        }
    }
    return retorno;
}

void tipoNombre(char vec[], int tam){
    vec[0] = toupper(vec[0]);

    for(int i = 1 ; i < tam ; i++){
        vec[i] = tolower(vec[i]);
    }
}

void getStr(char cadena[], int tam){

    fgets(cadena, tam, stdin);

    for(int i = 0; i < tam; i++){
        if(cadena[i] == '\n'){
            cadena[i] = '\0';
        }
    }
}

void getCharConfirmValidado(char* caracter){
    int bucle = 0;
    char opcion;

    while(bucle == 0){
        fflush(stdin);
        scanf("%c", &opcion);
        opcion = tolower(opcion);

        if(opcion == 's' || opcion == 'n'){
            *caracter = opcion;
            bucle = 1;
        }else{
            printf("\n Opcion incorrecta, ingrese S o N : ");
        }
    }
}

int menuOpciones(){
    char retorno;
    int bandera = 0;
    system("cls");

    printf("****** Menu opciones ******\n\n");
    printf("A- Alta moto\n");
    printf("B- Modificar moto\n");
    printf("C- Baja moto\n");
    printf("D- Listar motos\n");
    printf("E- Listar tipos\n");
    printf("F- Listar colores\n");
    printf("G- Listar servicios\n");
    printf("H- Listar catalogo Gomeria\n");
    printf("I- Alta trabajo\n");
    printf("J- Listar trabajos\n");
    printf("K- INFORMES\n");
    printf("L- Salir\n");
    fflush(stdin);

    while(bandera == 0){
        fflush(stdin);
        scanf("%c", &retorno);
        if( (retorno < 77 && retorno > 64) || (retorno < 109 && retorno > 96) ){
            bandera = 1;
        }else{
            printf("\nOpcion incorrecta, ingrese opcion: ");
        }
    }

    return retorno;
}

