#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Medicamentos.h"

void cargarMedicamentos(eMedicamento lista[], int tam)
{
    int i;
    int flag = 0;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            printf("Ingrese codigo: ");
            scanf("%d", &lista[i].codigo);
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(lista[i].descripcion);
            printf("Ingrese precio: ");
            scanf("%f", &lista[i].precio);
            printf("Ingrese laboratorio: ");
            fflush(stdin);
            gets(lista[i].laboratorio);
            flag = 1;
            lista[i].estado = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Lista llena\n");
    }
}

void mostraTodosMedicamentos(eMedicamento lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarMedicamento(lista[i]);
        }
    }
}
void mostrarMedicamento(eMedicamento med)
{
    printf("%d--%s--%f--%s\n", med.codigo, med.descripcion, med.precio, med.laboratorio);
}

void ordenarMedicamentos(eMedicamento lista[], int tam)
{
    int i, j;
    eMedicamento auxMedicamento;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(stricmp(lista[i].descripcion, lista[j].descripcion)>0)
            {
                auxMedicamento=lista[i];
                lista[i]=lista[j];
                lista[j]=auxMedicamento;
            }
            else
            {
                if(stricmp(lista[i].descripcion, lista[j].descripcion)==0)
                {
                    if(stricmp(lista[i].laboratorio, lista[j].laboratorio)>0)
                    {
                        auxMedicamento=lista[i];
                        lista[i]=lista[j];
                        lista[j]=auxMedicamento;
                    }
                }
            }
        }
    }
}

void inicializarMedicamentos(eMedicamento lista[], int tam)
{
    int codigo[]={1,2,3,4};
    char descripcion[][50]={"Valium","Ibuprofeno","Ibuprofeno", "pridinol"};
    float precio[]={5,10,7,14};
    char laboratorio[][30]={"Bago","Bayer","Roemer", "Bayer"};
    int estado[]={1,1,1,1};

    int i;

    for(i=0; i<tam; i++)
    {
        lista[i].codigo = codigo[i];
        lista[i].precio = precio[i];
        lista[i].estado = estado[i];
        strcpy(lista[i].descripcion,descripcion[i]);
        strcpy(lista[i].laboratorio,laboratorio[i]);
    }
}

void modificarMedicamento(eMedicamento lista[], int tam)
{
    int i;
    int codigoAux;
    char seguir;
    char laboratorioAux[50];

    printf("Ingrese codigo a modificar: ");
    scanf("%d", &codigoAux);

    for(i=0;i<tam;i++)
    {
        if(lista[i].codigo == codigoAux)
        {
            mostrarMedicamento(lista[i]);
            printf("Ingrese el nuevo laboratorio: ");
            fflush(stdin);
            gets(laboratorioAux);
            printf("Desea modificar el laboratorio? (s/n): ");
            seguir = tolower(getche());
            if(seguir == 's')
            {
                strcpy(lista[i].laboratorio,laboratorioAux);
                printf("\nLaboratorio modificado\n");

            }
            else if(seguir == 'n')
            {
                printf("\nEl usuario cancelo la modificacion\n");

            }
            else
            {
                printf("\nLa opcion no es valida. Se cancela la modificacion\n");

            }
            break;
        }
    }
    if(lista[i].codigo != codigoAux)
    {
        printf("Codigo no encontrado\n");
    }
}

void bajaMedicamento(eMedicamento lista[], int tam)
{
    int i;
    int codigoAux;
    char seguir;

    printf("Ingrese codigo a dar de baja: ");
    scanf("%d", &codigoAux);

    for(i=0;i<tam;i++)
    {
        if(codigoAux == lista[i].codigo)
        {
            mostrarMedicamento(lista[i]);
            printf("Desea dar de baja el laboratorio? (s/n): ");
            seguir = tolower(getche());
            if(seguir == 's')
            {
                lista[i].estado = 0;
                printf("\nLaboratorio dado de baja\n");

            }
            else if(seguir == 'n')
            {
                printf("\nEl usuario cancelo la baja\n");

            }
            else
            {
                printf("\nLa opcion no es valida. Se cancela la baja\n");

            }
            break;
        }
    }
    if(lista[i].codigo != codigoAux)
    {
        printf("Codigo no encontrado\n");
    }
}

int menu(char texto[])
{
    int opcion;
    system("cls");
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}

