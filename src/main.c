#include<stdio.h>
#include<math.h>
#include"funciones.h"

int main(){
    struct Vehiculo vehiculo1, vehiculo2;
    int opcion;
    float resultado, tiempo, distancia;

    printf("::::BIENVENID@ A C-LINER::::\n");
    printf(":::::::::::::::::::::::::::::::\n");
    printf("UNIDADES DE MEDIDA\n");
    printf("1- Km/s\n2- m/s\n3- millas/s");
    printf("SELECCIONE UNA OPCION (1-3): \n");
    scanf("%d", &opcion);

    do{
    switch (opcion) {
        case 1:
            pedirDatos()
            //tiempo = calcularTiempo(vehiculo1.)
            break;
        
        case 2:
            
            break;

        case 3:
           
            break;

        default:
            printf("OPCION NO VALIDA, INGRESE NUEVAMENTE UNA OPCION (1-3)\n");
            break;
        }
    }while(opcion > 0 && opcion < 4);

    printf(":::::MENU::::\n");


    return 0;
}