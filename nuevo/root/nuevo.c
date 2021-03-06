#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cliente.h"
#include "color.h"
#include "tipo.h"
#include "fecha.h"
#include "servicio.h"
#include "herramientas.h"
#include "moto.h"
#include "trabajo.h"
#include "informes.h"
#include "gomeria.h"

#define TAMMOT 4
#define TAMTIP 4
#define TAMCOL 5
#define TAMSER 4
#define TAMTRA 1
#define TAMFEC 5
#define TAMCLI 4
#define TAMGOM 6

int main()
{
    char salir = 'n';
    int autoIdMoto = 4;
    int autoIdTrabajo = 1;
    int gatillo = 4;
    int gatilloTrabajo = 1;

    eMoto motos[TAMMOT] = {{0, "jawa", 1000, 10000, 0, 200, 750, 0}, {1, "kawa", 1001, 10002, 1, 201, 600, 0}, {2, "suzu", 1002, 10003, 2, 202, 50, 0},  {3, "dadalt", 1000, 10002, 3, 204, 600, 0}};
    eTipo tipos[TAMTIP] = {{1000, "Enduro"}, {1001, "Chopera"}, {1002, "Scooter"}, {1003, "Ciclomotor"}};
    eColor colores[TAMCOL] = {{10000, "Gris"}, {10001, "Negro"}, {10002, "Blanco"}, {10003, "Azul"}, {10004, "Rojo"}};
    eServicio servicios[TAMSER] = {{20000, "Limpieza", 250.00}, {20001, "Ajuste", 300.00}, {20002, "Balanceo", 17.00}, {20003, "Cadena", 190.50}};
    eTrabajo trabajos[TAMTRA] = {{0, 0, 20002, {25, 4, 2020}, 0}};
    eCliente clientes[TAMCLI] = {{0, "Cristian", 'm'}, {1, "Paula", 's'}, {2, "Emanuel", 'm'}, {3, "Deborah", 's'}};
    eGomeria gomerias[TAMGOM] = {{200, "Pirelli", "Michelin", 2000.50}, {201, "Bridgestone", "Continental", 3400.40}, {202, "Dunlop", "Kenda", 4020.40}, {203, "Michelin", "Kenda", 5340.20}, {204, "Dunlop", "Bridgestone", 2430.00}, {205, "Katsume", "Gomez", 3043.20}};

    //inicializarMoto(motos, TAMMOT);
    //inicializarTipo(tipos, TAMTIP);
    //inicializarColores(colores, TAMCOL);
    //inicializarServicios(servicios, TAMSER);
    //inicializarTrabajos(trabajos, TAMTRA);
    //inicializarClientes(clientes,TAMCLI);
    //inicializarGomeria(gomerias, TAMGOM);


    do{
        switch(menuOpciones()){
            case 'a':
            	if(altaMoto(autoIdMoto, motos, TAMMOT, tipos, TAMTIP, colores, TAMCOL, clientes, TAMCLI, gomerias, TAMGOM)){
            		autoIdMoto++;
            		gatillo++;
            	}
                break;
            case 'b':
            	if(gatillo > 0){
            	modificarMoto(motos, TAMMOT, tipos, TAMTIP, colores, TAMCOL, clientes, TAMCLI, gomerias, TAMGOM);
            	}else{
            		printf("\nPrimero debe dar de alta una moto. \n");
            		fflush(stdin);
            		getchar();
            	}
                break;
            case 'c':
            	if(gatillo > 0){
            		bajaMoto(motos, TAMMOT, tipos, TAMTIP, colores, TAMCOL, clientes, TAMCLI, gomerias, TAMGOM);
            		gatillo--;
            	}else{
            		printf("\nPrimero debe dar de alta alguna moto. \n");
            		fflush(stdin);
            		getchar();
            	}
                break;
            case 'd':
            	if(gatillo > 0){
            	fflush(stdin);
            	system("cls");
            	listarMotos(motos, TAMMOT, tipos, TAMTIP, colores, TAMCOL, clientes, TAMCLI, gomerias, TAMGOM);
                getchar();
            	}else{
            		printf("\nPrimero debe dar de alta alguna moto. \n");
            		fflush(stdin);
            		getchar();
            	}
            	break;
            case 'e':
            	mostrarTipos(tipos, TAMTIP);
            	fflush(stdin);
            	getchar();
                break;
            case 'f':
            	mostrarColores(colores, TAMCOL);
            	fflush(stdin);
            	getchar();
            	break;
            case 'g':
            	system("cls");
            	mostrarServicios(servicios,  TAMSER);
            	fflush(stdin);
            	getchar();
                break;
            case 'h':
            	mostrarTodoGomeria(gomerias, TAMGOM);
            	fflush(stdin);
            	getchar();
            	break;
            case 'i':
            	if(gatillo > 0){
            	altaTrabajos(autoIdTrabajo, motos, TAMMOT, colores, TAMCOL, servicios, TAMSER, tipos, TAMTIP, trabajos, TAMTRA, clientes, TAMCLI, gomerias, TAMGOM);
            	}else{
            		printf("\nPrimero debe dar de alta alguna moto. \n");
            		fflush(stdin);
            		getchar();
            	}
                break;
            case 'j':
            	if(gatilloTrabajo > 0){
            		system("cls");
            		listarTrabajos(trabajos, TAMTRA, motos, TAMMOT, servicios, TAMSER);
            	}else{
            		printf("\nPrimero debe darse de alta algun trabajo. \n");
            		fflush(stdin);
            		getchar();
            	}
                break;
            case 'k':
            	informesMotos(motos, TAMMOT, colores, TAMCOL, servicios, TAMSER, tipos, TAMTIP, trabajos, TAMTRA, clientes, TAMCLI, gomerias, TAMGOM);
                break;
            case 'l':
                printf("\nConfirma salida? s/n \n");
                getCharConfirmValidado(&salir);
            	break;
        }

    }while(salir == 'n');

    return 0;
}
