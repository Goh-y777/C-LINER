#include<stdio.h>
#include<math.h>
#include"funciones.h"

float calcularTiempo(struct Vehiculo vehiculos[]){
    float tiempoColision;
    float distanciaTotal;

    distanciaTotal = vehiculos[0].pos - vehiculos[1].pos;

    tiempoColision = (distanciaTotal / (vehiculos[0].vel + vehiculos[1].vel));

    return tiempoColision;
}