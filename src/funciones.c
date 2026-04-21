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

float calcularDistancia(struct Vehiculo vehiculos[], float tiempo){
    float distanciaTotal;

    distanciaTotal = vehiculos[0].vel * tiempo;

    return distanciaTotal;
}

void pedirDatos(struct Vehiculo vehiculos[]){
    printf("INGRESE LA POSICION INICIAL DEL VEHICULO 1: \n");
            scanf("%f", &vehiculos[0].pos);
            printf("INGRESE LA VELOCIDAD INICIAL DEL VEHICULO 1: \n");
            scanf("%f", &vehiculos[0].vel);
            printf("INGRESE LA POSICION INICIAL DEL VEHICULO 2: \n");
            scanf("%f", &vehiculos[1].pos);
            printf("INGRESE LA VELOCIDAD INICIAL DEL VEHICULO 2: \n");
            scanf("%f", &vehiculos[1].vel);
}