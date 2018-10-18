#include <stdio.h>
#include <stdlib.h>
#include "tpFinal.h"
#include "estructuras.h"

int main()
{
    int control,controlGeneral=0;
    do{
        do{
            system("cls");
            muestraMenu();
            scanf("%i",&control);
        }while(control<1 || control>4);
        if(control!=4){
            switchCase(control);
            controlGeneral=1;
        }else
            controlGeneral=0;
    }while(controlGeneral!=0);
    system("cls");
    printf("Fin del programa\n");
    return 0;
}

