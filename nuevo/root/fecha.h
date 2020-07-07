#ifndef FECHA_H_
#define FECHA_H_

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

#endif /* FECHA_H_ */

/**
* \brief pide al usuario que ingrese una fecha y la guarda en un vector fecha
* \param estructura de fecha donde guardar la fecha
*/
void pedirFecha(eFecha fechas[]);
