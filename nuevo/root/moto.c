#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "cliente.h"
#include "color.h"
#include "tipo.h"
#include "fecha.h"
#include "servicio.h"
#include "herramientas.h"
#include "informes.h"
#include "trabajo.h"
#include "moto.h"

void listarMotos(eMoto motos[] , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){

    printf("****** MOTOS ******\n\n");
    printf("ID      NOMBRE       MARCA         TIPO       COLOR   CILINDRADA   CUBIERTAS       LLANTAS   VALOR GOM.\n\n");

    for(int i = 0 ; i < tammot ; i++){
        if(motos[i].isEmpty == 0){
            mostrarMoto(motos[i] , tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
}

int cargarCilindrada(){
    int retorno;
    int opcion;
    int bucle = 1;

    system("cls");
    printf("***** Ingrese opcion de cilindrada ***** \n\n");
    printf(" 1-  50cc\n 2-  125cc\n 3-  500cc\n 4-  600cc \n 5-  750cc\n\n");
    opcion = validarOpcion(5, 1, "\nIngrese opcion de cilindrada: ", "\nOpcion incorrecta, reintentar: ");;

    while(bucle == 1){
        switch(opcion){
            case 1:
                retorno = 50;
                bucle = 0;
                break;
            case 2:
                retorno = 125;
                bucle = 0;
                break;
            case 3:
                retorno = 500;
                bucle = 0;
                break;
            case 4:
                retorno = 600;
                bucle = 0;
                break;
            case 5:
                retorno = 750;
                bucle = 0;
                break;
            default:
                printf("\nOpcion incorrecta, reingrese opcion: ");
                scanf("%d", &opcion);
                fflush(stdin);
                break;
        }
    }
    return retorno;
}

void modificarMoto(eMoto motos[], int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    system("cls");
    int auxId;
    int indice;
    char confirmacion;
    int opcion;
    eMoto auxMoto;

    printf("***** MODIFICAR MOTO ***** \n\n");

    listarMotos(motos, tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
    printf("\n\nIngrese ID de MOTO: ");
    fflush(stdin);
    scanf("%d", &auxId);

    indice = buscarMoto(auxId, motos, tammot);

    system("cls");
    printf("***** MODIFICAR MOTO ***** \n\n");

    if(indice != -1){
        mostrarMoto(motos[indice] , tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);

        printf("\nQue desea modificar: \n\n 1- Color\n 2- Cilindrada\n 3- Cancelar \n\n");

        scanf("%d", &opcion);

    switch(opcion){
        case 1:
            mostrarColores(colores, tamcol);
            printf("\nSeleccione nuevo color: ");
            fflush(stdin);
            scanf("%d", &auxMoto.idColor);

            printf("\nDesea confirmar la modificacion? s/n \n\n");
            fflush(stdin);
            getCharConfirmValidado(&confirmacion);

            if(confirmacion == 's'){
                motos[indice].idColor = auxMoto.idColor;
                printf("\nModificado con exito.! \n\n");
                fflush(stdin);
                getchar();
            }else if(confirmacion == 'n'){
                printf("\nOperacion cancelada. \n\n");
                fflush(stdin);
                getchar();
            }
            break;
        case 2:
            auxMoto.cilindrada = cargarCilindrada();
            printf("\nDesea confirmar la modificacion? s/n \n\n");
            fflush(stdin);
            getCharConfirmValidado(&confirmacion);

            if(confirmacion == 's' || confirmacion == 'S'){
                motos[indice].cilindrada = auxMoto.cilindrada;
                printf("\nModificado con exito.! \n\n");
                fflush(stdin);
                getchar();
            }else if(confirmacion == 'n' || confirmacion == 'N'){
                printf("\nOperacion cancelada. \n\n");
                fflush(stdin);
                getchar();
            }
            break;
        case 3:
           break;
    }

    }else{
        printf("\nMoto no encontrada. \n\n");
        fflush(stdin);
        getchar();
    }
}

void mostrarMoto(eMoto motos , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    char color[20];
    char tipo[20];
    char nombre[20];
    char nombreCubierta[20];
    char nombreLlanta[20];
    int indice;


    cargarColor(color , motos.idColor, colores, tamcol);
    cargarTipo(tipo , motos.idTipo, tipos, tamtip);
    cargarCliente(nombre, motos.idCliente, clientes, tamcli);
    cargarMarcaCubierta(nombreCubierta, motos.idGomeria , gomeria, tamgom);
    cargarMarcaLlanta(nombreLlanta, motos.idGomeria , gomeria, tamgom);
    indice = buscarIndiceGomeria(motos.idGomeria,  gomeria, tamgom);

    printf("%d   %10s  %10s   %10s  %10s         %4d %11s   %11s      %.2f\n", motos.id, nombre, motos.marca , tipo, color, motos.cilindrada, nombreCubierta, nombreLlanta, gomeria[indice].precio);
}

int buscarMoto(int id, eMoto motos[], int tammot){
    int retorno = -1;
    for(int i = 0 ; i < tammot ; i++){
        if(motos[i].id == id && motos[i].isEmpty == 0){
            retorno = i;
            break;
        }
    }

    return retorno;
}

int bajaMoto(eMoto motos[] , int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int retorno = 0;

    system("cls");

    int auxId;
    int busqueda;
    char confirmacion;

    printf("***** BAJA MOTO ***** \n\n");

    listarMotos(motos, tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
    auxId = validarOpcion(100, 0, "\nIngrese ID de moto: ", "\nError, ID incorrecto, reintentar; ");
    //printf("\nIngrese ID de moto: ");     //REEMPLAZADO POR EL validarOpcion();
    //scanf("%d", &auxId);
    fflush(stdin);

    busqueda = buscarMoto(auxId, motos, tammot);

    if(busqueda != -1){
        //mostrarMoto(motos, tammot, tipos, tamtip, colores, tamcol);

        printf("\nDesea confirmar la baja? s/n \n\n");
        fflush(stdin);
        getCharConfirmValidado(&confirmacion);

        if(confirmacion == 's'){
            motos[busqueda].isEmpty = 1;
            retorno = 1;
            printf("\nDada de baja con exito.! \n\n");
            fflush(stdin);
            getchar();
        }else if(confirmacion == 'n'){
            printf("\nOperacion cancelada. \n\n");
            fflush(stdin);
            getchar();
        }
    }else{
        printf("\nMoto no encontrada. \n\n");
        fflush(stdin);
        getchar();
    }
    return retorno;
}

int buscarLibreMoto(eMoto motos[], int tammot){
    int posicion = -1;
        for(int i = 0 ; i < tammot ; i++){
            if(motos[i].isEmpty == 1){
                posicion = i;
                break;
            }
        }
    return posicion;
}

int altaMoto(int idMoto, eMoto motos[], int tammot, eTipo tipos[], int tamtip, eColor colores[], int tamcol, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int retorno = 0;
    int lugar;
    eMoto auxMoto;

    system("cls");

    printf("****** ALTA MOTO ******\n\n");

    lugar = buscarLibreMoto(motos, tammot);

    if(lugar == -1){

    printf("\nNo hay lugar para mas motos. \n\n");
    fflush(stdin);
    getchar();

    }else{

    auxMoto.id = idMoto;

    printf("Ingrese marca: \n");
    fflush(stdin);
    //getStr(auxMoto.marca, 20);
    while(getNombre(auxMoto.marca, 20)){
        printf("\nError. Reingrese nombre: ");
    }
    //tipoNombre(auxMoto.marca, 20);

    mostrarClientes(clientes, tamcli);
    fflush(stdin);
    auxMoto.idCliente = validarOpcion(100, 0, "\nIngrese cliente por su ID: ", "\nID incorrecto, reintentar: ");
    while(buscarClientes(auxMoto.idCliente , clientes, tamcli) == -1){
    	printf("\nError, reingrese ID valido:");
    	auxMoto.idCliente = validarOpcion(100, 0, " ", "\nID incorrecto, reintentar: ");
    }

    mostrarTodoGomeria(gomeria, tamgom);
    fflush(stdin);
    auxMoto.idGomeria = validarOpcion(220, 200, "\n Ingrese servicio de gomeria por ID: ", "\nID incorrecto, reintentar: ");


    mostrarTipos(tipos, tamtip);
    fflush(stdin);
    auxMoto.idTipo = validarOpcion(1003, 1000, "\nIngrese tipo por ID: ", "\nID incorrecto, reintentar: ");

    mostrarColores(colores, tamcol);
    auxMoto.idColor = validarOpcion(10004, 10000, "\nIngrese color por ID: ", "\nID incorrecto, reintentar: ");;


    auxMoto.cilindrada = cargarCilindrada();

    printf("\nMoto agregada con exito.!");
    fflush(stdin);
    getchar();

    auxMoto.isEmpty = 0;

    motos[lugar] = auxMoto;

    retorno = 1;
    }

    return retorno;
}

void inicializarMoto(eMoto motos[], int tammot){
     for(int i = 0 ; i < tammot ; i++){
        motos[i].isEmpty = 1;
     }
}

