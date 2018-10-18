#include <stdio.h>
#include <stdlib.h>
#include "tpFinal.h"
#include "estructuras.h"

void muestraMenu(){
    printf("\n------------ADMINISTRACION EDIFICIO------------");
    printf("\n 1 * Administrar pisos");
    printf("\n 2 * Administrar departamentos");
    printf("\n 3 * Estadisticas (luz, gas, agua)");
    printf("\n 4 * SALIR");
    printf("\n-----------------------------------------------\n");
}

void switchCase(int opcion){
    int control;
    switch(opcion){
    case 1:
        do{
            system("cls");
            printf("\n----------ADMINISTRACION DE PISOS----------");
            printf("\n 1 * Cargar pisos y guardar en archivo");
            printf("\n 2 * SALIR");
            printf("\n-------------------------------------------\n");
            scanf("%i",&control);
        }while(control<1 || control>2);
        if(control==1){
            cargaPisosYGuarda(); //Funcion logica
        }
        system("cls");
        break;
    case 2:
        do{
            system("cls");
            printf("\n----------ADMINISTRACION DE DEPARTAMENTOS----------");
            printf("\n 1 * ¿?");
            printf("\n 2 * ¿?");
            printf("\n 3 * SALIR");
            printf("\n---------------------------------------------------\n");
            scanf("%i",&control);
        }while(control<1 || control>3);
        if(control!=3){
            //switchCaseAdminDptos(control);
        }
        break;
    case 3:
        system("cls");
        printf("\nESTADISTICAS\n");
        system("pause");
        system("cls");
        break;
    default:
        break;
    }
}
