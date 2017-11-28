#include <stdio.h>
#include <stdlib.h>
#include "medicamentos.h"
#define CANT_MEDICAMENTOS 3

int main()
{
    eMedicamento listaMedicamentos[CANT_MEDICAMENTOS]; //Cantidad de medicamentos del tipo eMedicamento
    int opcion = 0;
    int i;

    while(opcion != 5)
    {
        system("cls");
        printf("1 - ALTA \n2 - BAJA \n3 - LISTAR \n4 - ORDENAR \n5 - SALIR \n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                system("cls");
                cargarMedicamentos(listaMedicamentos, 3);
                break;
            case 2:
                break;
            case 3:
                system("cls");
                mostraTodosMedicamentos(listaMedicamentos, 3);
                system("pause");
                break;
            case 4:
                break;
        }// FIN SWITCH

    } //FIN WHILE
    //Carga secuencial de los medicamentos
    //cargarMedicamentos(listaMedicamentos, 3);

    //Muestra secuencial de los medicamentos
    //mostraTodosMedicamentos(listaMedicamentos, 3);

    return 0;
}

