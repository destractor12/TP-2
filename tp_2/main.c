#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define TAM 1000

int main()
{
    eEmployee* list[TAM];
    int opcion;

    initEmployees(list,TAM);
    do
    {
        opcion = mostrarMenu();



        switch(opcion)
        {
            case 1:alta(list,TAM);
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5: opcion=5;
            break;
        }

    }while(opcion!=5);

    return 0;
}
