#include <stdio.h>
#include <stdlib.h>
#include "Medicamentos.h"
#define TAM 4

int main()
{
    eMedicamento listaMedicamentos[TAM];
    int i;
    int opcion;
    for(i=0; i<TAM; i++)
    {
        listaMedicamentos[i].estado = 0;
    }

    do
    {
        opcion=menu("1.Cargar \n2.Mostrar \n3.Ordenar \n4.Modificacion \n5.Baja \n6.Salir \nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                //cargarMedicamentos(listaMedicamentos, TAM);
                inicializarMedicamentos(listaMedicamentos, TAM);
                system("pause");
            break;
            case 2:
                mostraTodosMedicamentos(listaMedicamentos, TAM);
                system("pause");
            break;
            case 3:
                ordenarMedicamentos(listaMedicamentos,TAM);
            break;
            case 4:
                modificarMedicamento(listaMedicamentos, TAM);
                system("pause");
            break;
            case 5:
                bajaMedicamento(listaMedicamentos, TAM);
                system("pause");
            break;
        }

    }while(opcion!=6);

    return 0;
}



