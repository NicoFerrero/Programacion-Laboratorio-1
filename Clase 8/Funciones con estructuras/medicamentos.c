#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "medicamentos.h"

void cargarMedicamentos(eMedicamento lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
            printf("Ingrese codigo: ");
            scanf("%d", &lista[i].codigo);
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("Ingrese precio: ");
            scanf("%f", &lista[i].precio);
            printf("Ingrese laboratorio: ");
            fflush(stdin);
            gets(lista[i].laboratorio);
    }
}

void mostraTodosMedicamentos(eMedicamento lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarMedicamento(lista[i]);
    }
}

void mostrarMedicamento(eMedicamento med)
{
    printf("%d--%s--%f--%s\n", med.codigo, med.nombre, med.precio, med.laboratorio);
}



