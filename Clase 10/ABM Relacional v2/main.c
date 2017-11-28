#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "farmacia.h"

#define CLIENTES 10
#define LABORATORIOS 3
#define MEDICAMENTOS 5
#define CLIENTESMEDICAMENTOS 50

int main()
{
    eMedicamento medicamentos[MEDICAMENTOS];
    eCliente clientes[CLIENTES];
    eLaboratorio laboratorios[LABORATORIOS];
    eClienteMedicamento ClientesMedicamentos[CLIENTESMEDICAMENTOS];

    int opcion;
    char salir;

    InicializarMedicamentos(medicamentos,MEDICAMENTOS);
    InicializarClientes(clientes,CLIENTES);
    InicializarLaboratorios(laboratorios,LABORATORIOS);
    InicializarClientesMedicamentos(ClientesMedicamentos,CLIENTESMEDICAMENTOS);

    do
    {
        system("cls");
        opcion = menu("1 - Clientes con descripcion del medicamento \n2 - Clientes que compraron Ibuprofeno \n3 - Cada medicamento con los clientes que lo compraron \n4 - Stock disponible para el medicamento ingresado por el usuario \n5 - Total ($) de ventas \n6 - El medicamento mas vendido (puede ser mas de uno) \n7 - Salir \nIngrese una opcion: ");
        switch(opcion)
        {
            case 1:
                system("cls");
                mostrarClientes(clientes, medicamentos, CLIENTES, MEDICAMENTOS);
                system("pause");
                break;
            case 2:
                system("cls");
                compraronIbuprofeno(medicamentos, clientes, CLIENTES, MEDICAMENTOS);
                system("pause");
                break;
            case 3:
                break;
            case 4:
                system("cls");
                stockDisponible(medicamentos, MEDICAMENTOS);
                system("pause");
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                salir = 's';
                break;
        }
    }while(salir != 's');

    /*
    mostrarMedicamentos(medicamentos, MEDICAMENTOS);
    printf("\n***************************************************\n");
    mostrarClientes(clientes, CLIENTES);
    */

    return 0;
}

