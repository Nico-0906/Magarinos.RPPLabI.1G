#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "servicio.h"


void inicializarServicios(eServicio servicios[], int tamser){
     for(int i = 0 ; i < tamser ; i++){
        servicios[i].isEmpty = 1;
     }
}

void mostrarServicios(eServicio servicios[], int tamser){
    printf("**** Servicios ****\n\n");
    printf("ID          Descripcion     Precio\n\n");

    for(int i = 0 ; i < tamser ; i++){
        if(servicios[i].isEmpty == 0){
            printf("%d        %10s     %.2f\n", servicios[i].id, servicios[i].descripcion, servicios[i].precio);
        }
    }
}
