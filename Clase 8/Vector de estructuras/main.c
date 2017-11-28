#include <stdio.h>
#include <stdlib.h>
#define CANT_MEDICAMENTOS 3

typedef struct
{
    int codigo;
    float precio;
    char nombre[50];
    char laboratorio[50];
}eMedicamento;

int main()
{
    eMedicamento listaMedicamentos[CANT_MEDICAMENTOS]; //Cantidad de medicamentos del tipo eMedicamento
    int i;

    //Carga secuencial de los medicamentos
    for(i=0;i<CANT_MEDICAMENTOS;i++)
    {
        system("cls");
        printf("Medicamento %d", i+1);
        printf("\nIngrese el codigo del medicamento: ");
        scanf("%d", &listaMedicamentos[i].codigo);
        printf("Ingrese el precio del medicamento: ");
        scanf("%f", &listaMedicamentos[i].precio);
        printf("Ingrese el nombre del medicamento: ");
        fflush(stdin);
        gets(listaMedicamentos[i].nombre);
        printf("Ingrese el laboratorio del medicamento: ");
        fflush(stdin);
        gets(listaMedicamentos[i].laboratorio);
    }

    //Muestra secuencial de los medicamentos
    printf("Laboratorio -- Nombre -- Codigo -- Precio");
    for(i=0;i<CANT_MEDICAMENTOS;i++)
    {
        printf("\n%s -- %s -- %d -- %.2f",listaMedicamentos[i].laboratorio, listaMedicamentos[i].nombre, listaMedicamentos[i].codigo, listaMedicamentos[i].precio);
    }

    printf("\n");

    return 0;
}
