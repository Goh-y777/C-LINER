#include<stdio.h>
#include<math.h>

#define MAX_VEHICULOS 2

struct Vehiculo{
    float pos;
    float vel;
};
float calcularTiempo(struct Vehiculo vehiculos[]);
float calcularPosicion(struct Vehiculo vehiculos[]);
