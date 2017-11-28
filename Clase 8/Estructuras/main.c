#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nombre[50];
    float precio;
    char laboratorio[30];
}eMedicamento;

int main()
{
    eMedicamento medicamento1;
    eMedicamento medicamento2;
    eMedicamento medicamento3 = {40, "Aspirina", 90, "Bayer"}; //Carga por extension (debe estar en orden)
    eMedicamento medicamento4;

    //Hardcodeo de datos
    medicamento1.codigo = 701;
    medicamento1.precio = 105.40;
    strcpy(medicamento1.nombre, "Amoxicilina");
    strcpy(medicamento1.laboratorio, "Rafo");

    medicamento2.codigo = 605;
    medicamento2.precio = 90.60;
    strcpy(medicamento2.nombre, "Ibuprofeno");
    strcpy(medicamento2.laboratorio, "Bayer");

    //Carga de una estructura
    printf("Ingrese el codigo del medicamento: ");
    scanf("%d", &medicamento4.codigo);
    printf("Ingrese el precio del medicamento: ");
    scanf("%f", &medicamento4.precio);
    printf("Ingrese el nombre del medicamento: ");
    fflush(stdin);
    gets(medicamento4.nombre);
    printf("Ingrese el laboratorio del medicamento: ");
    fflush(stdin);
    gets(medicamento4.laboratorio);

    //Copiar los datos de un medicamento a otro medicamento
    medicamento1.codigo = medicamento2.codigo;
    medicamento1.precio = medicamento2.precio;
    strcpy(medicamento1.nombre, medicamento2.nombre);
    strcpy(medicamento1.laboratorio, medicamento2.laboratorio);

    //Copiar los datos de un medicamento a otro medicamento de forma mas facil, siempre y cuando sean del mismo tipo
    medicamento1 = medicamento2;

    //Mostrar los medicamentos
    printf("\n");
    printf("%s -- %s -- %d -- %.2f",medicamento1.laboratorio, medicamento1.nombre, medicamento1.codigo, medicamento1.precio);
    printf("\n%s -- %s -- %d -- %.2f",medicamento2.laboratorio, medicamento2.nombre, medicamento2.codigo, medicamento2.precio);
    printf("\n%s -- %s -- %d -- %.2f",medicamento3.laboratorio, medicamento3.nombre, medicamento3.codigo, medicamento3.precio);
    printf("\n%s -- %s -- %d -- %.2f",medicamento4.laboratorio, medicamento4.nombre, medicamento4.codigo, medicamento4.precio);
    printf("\n");

    return 0;
}
