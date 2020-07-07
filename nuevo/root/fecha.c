#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "fecha.h"

void pedirFecha(eFecha fechas[]){
    int bucle = 1;
    eFecha auxFecha;
    while(bucle == 1){
        scanf("%d/%d/%d", &auxFecha.dia, &auxFecha.mes, &auxFecha.anio);
        if(auxFecha.dia >= 1 && auxFecha.dia <= 31 && auxFecha.mes >= 1 && auxFecha.mes <= 12 && auxFecha.anio >= 1900 && auxFecha.anio <= 9999){
            printf("\nFecha ingresada con exito\n");
            *fechas = auxFecha;
            bucle = 0;
        }else{
            printf("\nFecha incorrecta, reingresar: ");
        }
    }
}
