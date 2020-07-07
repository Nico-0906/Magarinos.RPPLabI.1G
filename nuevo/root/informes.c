#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gomeria.h"
#include "cliente.h"
#include "color.h"
#include "tipo.h"
#include "fecha.h"
#include "servicio.h"
#include "herramientas.h"
#include "informes.h"
#include "moto.h"
#include "trabajo.h"

int obtenerTotalMotosDeColor(eColor colores, eMoto motos[], int tammot){

	int retorno = 0;

	for(int i = 0; i < tammot ; i++){
        if(colores.id == motos[i].idColor){
        	retorno++;
        }
	}

	return retorno;
}

void mostrarColorConMasMotos(eColor colores[], int tamcol, eMoto motos[], int tammot, eTipo tipos[], int tamtip){
	int mayorTotal;
	int totalMotosPorColor[tamcol];
	int primerColor = 0;

	system("cls");
	printf("**** Color con mas cantidad de motos ****\n\n");

	for(int i = 0 ; i < tamcol ; i++){
		totalMotosPorColor[i] = obtenerTotalMotosDeColor(colores[i], motos, tammot);
	}

	for(int i = 0; i < tamcol; i++){
		if(totalMotosPorColor[i] > mayorTotal || primerColor == 0){
			mayorTotal = totalMotosPorColor[i];
			primerColor = 1;
		}
	}

	printf("La mayor cantidad de motos del mismo color es de %d y son del color", mayorTotal);

	for(int i = 0; i < tamcol ; i++){
		if(totalMotosPorColor[i] == mayorTotal){
			printf(", %s", colores[i].nombreColor);
		}
	}

	printf("\n\n");
	system("pause");

}

void motosPorColorTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int opcionTipo;
    int opcionColor;
    int bandera = 1;

    system("cls");
    printf("****** MOTOS DE COLOR Y TIPO ******\n\n");
    mostrarTipos(tipos, tamtip);
    opcionTipo = validarOpcion(1003, 1000, "\nIngrese tipo de moto por ID: ", "\nID incorrecto, reintentar: ");

    system("cls");
    printf("****** MOTOS DE COLOR Y TIPO ******\n\n");
    mostrarColores(colores, tamcol);
    opcionColor = validarOpcion(10004, 10000, "\nIngrese color de moto por ID: ", "\nID incorrecto, reintentar: ");

    system("cls");
    printf("****** MOTOS DE COLOR Y TIPO ******\n\n");
    for(int i = 0 ; i < tammot ; i++){
        if(motos[i].idColor == opcionColor && motos[i].idTipo == opcionTipo && motos[i].isEmpty == 0){
            bandera = 0;
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
    if(bandera == 1){
        printf("\nNo hay motos con el color y el tipo seleccionado \n");
    }
}

void motosSeparadasTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    system("cls");
    printf("****** MOTOS SEPARADAS POR TIPO ******\n\n");
    printf("MOTOS TIPO ENDURO\n");
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");
    for(int i = 0; i < tammot; i++){
        if(motos[i].idTipo == 1000 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
     printf("\n\nMOTOS TIPO CHOPERA\n");
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");
    for(int i = 0; i < tammot; i++){
        if(motos[i].idTipo == 1001 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
     printf("\n\nMOTOS TIPO SCOOTER\n");
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");
    for(int i = 0; i < tammot; i++){
        if(motos[i].idTipo == 1002 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
     printf("\n\nMOTOS TIPO CICLOMOTOR\n");
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");
    for(int i = 0; i < tammot; i++){
        if(motos[i].idTipo == 1003 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }


}

void motosMayorCilindrada(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int mayor = 0;
    int bandera = 0;

    system("cls");
    printf("****** MOTOS MAYOR CILINDRADA ******\n\n");
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");

    for(int i = 0; i < tammot ; i++){
        if(motos[i].cilindrada >= mayor && motos[i].isEmpty == 0){
            mayor = motos[i].cilindrada;
        }
    }
    for(int i = 0; i < tammot ; i++){
        if(motos[i].cilindrada == mayor && motos[i].isEmpty == 0){
            bandera = 1;
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
        }
    }
    if(bandera == 0){
        printf("\n NO HAY MOTOS INGRESADAS \n");
    }
}

void motosPorGomeriaMasCaro(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
	float mayor = 0;
	int bandera = 0;
	int indice;

	    system("cls");
	    printf("****** MOTOS MAYOR PRECIO GOMERIA ******\n\n");
	    printf("ID      NOMBRE       MARCA         TIPO       COLOR   CILINDRADA   CUBIERTAS       LLANTAS   VALOR GOM.\n\n");

	    for(int i = 0; i < tammot ; i++){
	    	indice = buscarIndiceGomeria(motos[i].idGomeria,  gomeria, tamgom);
	        if(gomeria[indice].precio >= mayor && motos[i].isEmpty == 0){
	            mayor = gomeria[indice].precio;
	        }
	    }
	    for(int i = 0; i < tammot ; i++){
	    	indice = buscarIndiceGomeria(motos[i].idGomeria,  gomeria, tamgom);
	        if(gomeria[indice].precio == mayor && motos[i].isEmpty == 0){
	            bandera = 1;
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    if(bandera == 0){
	        printf("\n NO HAY MOTOS INGRESADAS \n");
	    }
}

void OrdenarPrecioGom(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
	int indice1;
	int indice2;
	int auxId;


	for(int i = 0; i < tammot - 1 ; i++){
		for(int j = i + 1 ; j < tammot ; j++){
			indice1 = buscarIndiceGomeria(motos[i].idGomeria,  gomeria, tamgom);
			indice2 = buscarIndiceGomeria(motos[j].idGomeria,  gomeria, tamgom);
			if(gomeria[indice1].precio < gomeria[indice2].precio){
				auxId = gomeria[indice1].id;
				gomeria[indice1].id = gomeria[indice2].id;
				gomeria[indice2].id = auxId;
			}
		}
	}
	printf("\nORDENAMIENTO POR PRECIO DE GOMERIA REALIZADO CON EXITO!!");
	fflush(stdin);
}

void OrdenarCilindrada(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
	int auxId;
	char marca[20];
	int idTipo;
	int idColor;
	int idCliente;
	int idGomeria;
	int cilindrada;

	for(int i = 0; i < tammot - 1 ; i++){
		for(int j = i + 1 ; j < tammot ; j++){
			if(motos[i].cilindrada > motos[j].cilindrada){
				auxId = motos[i].id;
				motos[i].id = motos[j].id;
				motos[j].id = auxId;

				strcpy(marca, motos[i].marca);
				strcpy(motos[i].marca, motos[j].marca);
				strcpy(motos[j].marca, marca);

				idTipo = motos[i].idTipo;
				motos[i].idTipo = motos[j].idTipo;
				motos[j].idTipo = idTipo;

				idColor = motos[i].idColor;
				motos[i].idColor = motos[j].idColor;
				motos[j].idColor = idColor;

				idCliente = motos[i].idCliente;
				motos[i].idCliente = motos[j].idCliente;
				motos[j].idCliente = idCliente;

				idGomeria = motos[i].idGomeria;
				motos[i].idGomeria = motos[j].idGomeria;
				motos[j].idGomeria = idGomeria;

				cilindrada = motos[i].cilindrada;
				motos[i].cilindrada = motos[j].cilindrada;
				motos[j].cilindrada = cilindrada;
			}
		}
	}
	printf("\nMOTOS ORDENADAS POR CILINDRADA!!");
	fflush(stdin);

}

void motosOrdenadasPorServicioGom(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
		system("cls");
	    printf("****** MOTOS SEGUN SERVICIO DE GOMERIA ******\n\n");
	    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");
	    for(int i = 0; i < tammot; i++){
	        if(motos[i].idGomeria == 200 && motos[i].isEmpty == 0){
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    for(int i = 0; i < tammot; i++){
	        if(motos[i].idGomeria == 201 && motos[i].isEmpty == 0){
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    for(int i = 0; i < tammot; i++){
	        if(motos[i].idGomeria == 202 && motos[i].isEmpty == 0){
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    for(int i = 0; i < tammot; i++){
	        if(motos[i].idGomeria == 203 && motos[i].isEmpty == 0){
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    for(int i = 0; i < tammot; i++){
	    	if(motos[i].idGomeria == 204 && motos[i].isEmpty == 0){
	    		mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	    	}
	    }
	    for(int i = 0; i < tammot; i++){
	    	if(motos[i].idGomeria == 205 && motos[i].isEmpty == 0){
	    		mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	    	}
	    }
}

void cantidadMotosGomeria(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
	int idGomeria;
	int bandera = 1;

	    system("cls");
	    printf("****** MOTOS CON X SERVICIO ******\n\n");
	    mostrarTodoGomeria(gomeria, tamgom);
	    idGomeria = validarOpcion(250, 200, "\nIngrese servicio de gomeria por ID: ", "\nID incorrecto, reintentar: ");


	    system("cls");
	    printf("****** MOTOS CON SERVICIO DE GOMERIA ELEGIDO ******\n\n");
	    for(int i = 0 ; i < tammot ; i++){
	        if(motos[i].idGomeria == idGomeria && motos[i].isEmpty == 0){
	            bandera = 0;
	            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
	        }
	    }
	    if(bandera == 1){
	        printf("\nNo hay motos con el servicio de gomeria elegido \n");
	    }


}

void motosPorTipo(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int opcion;
    char tipo[20];
    int bandera = 1;
    mostrarTipos(tipos, tamtip);
    opcion = validarOpcion(1003, 1000, "\nIngrese tipo de moto por ID: ", "\nID incorrecto, reintentar: ");

    cargarTipo(tipo, opcion, tipos, tamtip);

    system("cls");
    printf("****** Motos tipo %s ******\n\n", tipo);
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");

    for(int i = 0; i < tamcol; i++){
        if(motos[i].idTipo == opcion && tipos[i].isEmpty == 0 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
            bandera = 0;
        }
    }
    if(bandera == 1){
        printf("\nNo hay motos de ese tipo cargadas. \n");
    }

}

void motosPorColor(eMoto motos[],int tammot, eColor colores[],int tamcol, eServicio servicios[],int tamser, eTipo tipos[],int tamtip, eTrabajo trabajos[],int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){
    int opcion;
    char color[20];
    int bandera = 1;
    mostrarColores(colores, tamcol);
    opcion = validarOpcion(10004, 10000, "\nIngrese color de moto por ID: ", "\nID incorrecto, reintentar: ");

    cargarColor(color, opcion, colores, tamcol);

    system("cls");
    printf("****** Motos color %s ******\n\n", color);
    printf("ID       NOMBRE           MARCA           TIPO         COLOR     CILINDRADA\n\n");

    for(int i = 0; i < tamcol; i++){
        if(motos[i].idColor == opcion && colores[i].isEmpty == 0 && motos[i].isEmpty == 0){
            mostrarMoto(motos[i], tammot, tipos, tamtip, colores, tamcol, clientes, tamcli, gomeria, tamgom);
            bandera = 0;
        }
    }
    if(bandera == 1){
        printf("\nNo hay motos de ese color cargadas. \n");
    }

}

int menuInforme(){

    int retorno;

    system("cls");

    printf("***** INFORME MOTOS ***** \n");

    printf("1- Listar motos por color elegido \n");
    printf("2- Listar motos por tipo elegido \n");
    printf("3- Motos de mayor cilindrada \n");
    printf("4- Motos separadas por tipo \n");
    printf("5- Cantidad de motos por color y tipo\n");
    printf("6- Colores mas elegidos por clientes \n");
    printf("7- Motos con servicio de gomeria mas caro \n");
    printf("8- Listado de motos ordenados por servicio de Gomeria \n");
    printf("9- Cantidad de motos con X servicio de Gomeria \n");
    printf("10- Ordena el listado de motos por servicio de gomeria mas caro  \n");
    printf("11- Ordena el listado de motos por menor Cilindrada \n");
    printf("12- \n");
    printf("13- \n");
    printf("14- \n");
    printf("15- SALIR \n \n ");

    retorno = validarOpcion(15, 1, "\nIngrese opcion: ", "\nOpcion incorrecta, reintentar: ");
    fflush(stdin);

    return retorno;
}

void informesMotos(eMoto motos[], int tammot, eColor colores[], int tamcol, eServicio servicios[], int tamser, eTipo tipos[], int tamtip, eTrabajo trabajos[], int tamtra, eCliente clientes[], int tamcli, eGomeria gomeria[], int tamgom){

    char seguir = 's';
    char confirma;
    do{
        switch(menuInforme())
        {
            case 1:
                motosPorColor(motos, tammot, colores, tamcol, servicios, tamser, tipos, tamtip, trabajos, tamtra, clientes, tamcli, gomeria, tamgom);
                break;
            case 2:
                motosPorTipo(motos, tammot, colores, tamcol, servicios, tamser, tipos, tamtip, trabajos, tamtra, clientes, tamcli, gomeria, tamgom);
                break;
            case 3:
                motosMayorCilindrada(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
                break;
            case 4:
                motosSeparadasTipo(motos,tammot, colores,tamcol, servicios,tamser, tipos,tamtip, trabajos,tamtra, clientes, tamcli, gomeria, tamgom);
                break;
            case 5:
                motosPorColorTipo(motos,tammot, colores,tamcol, servicios,tamser, tipos,tamtip, trabajos,tamtra, clientes, tamcli, gomeria, tamgom);
                break;
            case 6:
            	mostrarColorConMasMotos(colores, tamcol, motos, tammot, tipos, tamtip);
            	//motosColorMasElegido(motos, tammot, colores, tamcol, servicios, tamser, tipos, tamtip, trabajos, tamtra, clientes, tamcli);
                break;
            case 7:
            	motosPorGomeriaMasCaro(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
            	break;
            case 8:
            	motosOrdenadasPorServicioGom(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
            	break;
            case 9:
            	cantidadMotosGomeria(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
            	break;
            case 10:
            	OrdenarPrecioGom(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
            	break;
            case 11:
            	OrdenarCilindrada(motos ,tammot, colores,tamcol, servicios,tamser, tipos,tamtip,trabajos,tamtra,clientes,tamcli, gomeria, tamgom);
            	break;
            case 12:
            	break;
            case 13:
            	break;
            case 14:
            	break;
            case 15:
                printf("\nConfirma salida? s/n \n");
                fflush(stdin);
                scanf("%c", &confirma);
                if(confirma == 's'){
                    seguir = 'n';
                }
                break;
        }

        fflush(stdin);
        getchar();

    }while(seguir == 's');

}
