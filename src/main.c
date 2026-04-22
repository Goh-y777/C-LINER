#include<stdio.h>
#include<math.h>
#include"funciones.h"

#define MAX_VEHICULOS 2

int main(){
    struct Vehiculo listaVehiculos[MAX_VEHICULOS];
    int opcion;
    float tiempo, distancia;

    printf("::::BIENVENID@ A C-LINER::::\n");
    printf(":::::::::::::::::::::::::::::::\n");
    printf(":::::MENU::::\n");
    printf("UNIDADES DE MEDIDA\n");
    printf("1- Km/s\n2- m/s\n3- millas/s");

    do{

    printf("SELECCIONE UNA OPCION (1-3): \n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);
            printf("La distancia en que se encontraran ambos vehiculos es: %f", distancia);
            printf("\n");
            printf("El tiempo en que se encontraran ambos vehiculos es: %f", tiempo);
            break;
        
        case 2:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);
            printf("La distancia en que se encontraran ambos vehiculos es: %f", distancia);
            printf("\n");
            printf("El tiempo en que se encontraran ambos vehiculos es: %f", tiempo);
            break;

        case 3:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);
            printf("La distancia en que se encontraran ambos vehiculos es: %f", distancia);
            printf("\n");
            printf("El tiempo en que se encontraran ambos vehiculos es: %f", tiempo);
            break;

        default:
            printf("OPCION NO VALIDA, INGRESE NUEVAMENTE UNA OPCION (1-3)\n");
            break;
        }
    }while(opcion > 0 && opcion < 4);
    return 0;
}