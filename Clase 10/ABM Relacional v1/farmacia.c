#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "farmacia.h"

void InicializarMedicamentos(eMedicamento medicamentos[], int tam)
{
    int idM[]={100,101,102,103,104};
    int idL[]={1,2,3,1,2};
    char descripcion[][50]={"Aspirina","Ibuprofeno","Amoxidal","Diclofenac","Pridinol"};
    float precio[]={10,70,65,85,35};
    int stock[]={15,10,74,11,40};
    eFecha elaboracion[]={{20,8,2017},{31,12,2017},{4,5,2017},{7,9,2017},{21,2,2017}};
    eFecha vencimiento[]={{20,8,2020},{31,12,2021},{4,5,2022},{7,9,2025},{21,2,2018}};
    int i;

    for(i=0; i<tam; i++)
    {
        medicamentos[i].idMedicamento=idM[i];
        medicamentos[i].idLaboratorio=idL[i];
        strcpy(medicamentos[i].descripcion, descripcion[i]);
        medicamentos[i].precio=precio[i];
        medicamentos[i].stock=stock[i];
        medicamentos[i].elaboracion=elaboracion[i];
        medicamentos[i].vencimiento=vencimiento[i];
    }
}

void InicializarClientes(eCliente clientes[], int tam)
{
    int idC[]={1,2,3,4,5,6,7,8,9,10};
    char nombre[][50]={"Nicolas","Maria","Juan","Jose","Guido","Agustin","Martin","Federico","Agustina","Lucia"};
    int idM[]={100,101,102,103,104,101,103,100,102,104};
    int i;

    for(i=0; i<tam; i++)
    {
        clientes[i].IdCliente=idC[i];
        clientes[i].idMedicamento=idM[i];
        strcpy(clientes[i].nombre, nombre[i]);
    }
}

void InicializarLaboratorios(eLaboratorio laboratorios[], int tam)
{
    int id[]={1,2,3};
    char nombre[][50]={"Roemers","Bago","Bayer"};
    char direccion[][50]={"mitre 750","Belgrano 788","Sarmiento 1258"};
    char telefono[][50]={"48563215","48736125","48953621"};
    int i;

    for(i=0; i<tam; i++)
    {
        laboratorios[i].idLaboratorio=id[i];
        strcpy(laboratorios[i].nombre, nombre[i]);
        strcpy(laboratorios[i].direccion, direccion[i]);
        strcpy(laboratorios[i].telefono, telefono[i]);
    }
}

void mostrarClientes(eCliente clientes[], eMedicamento medicamentos[], int tamC, int tamM)
{
    int i;
    int j;
    char aux[50];
    printf("ID\t%10s\tMEDICAMENTO\n", "NOMBRE");
    for(i=0; i<tamC; i++)
    {
        for(j=0;j<tamM;j++)
        {
            if(clientes[i].idMedicamento == medicamentos[j].idMedicamento)
            {
                strcpy(aux,medicamentos[j].descripcion);
            }
        }
        printf("%d\t%10s\t%s\n", clientes[i].IdCliente, clientes[i].nombre, aux);
    }
}

void mostrarMedicamentos(eMedicamento medicamentos[], int tam)
{
    int i;
    printf("ID\t%10s\tPRECIO\tLAB\tSTOCK\tF. ELAB\t\tF.VTO\n", "DESCRIPCION");
    for(i=0; i<tam; i++)
    {
        printf("%d\t%10s\t%.2f\t%d\t%d\t%d/%d/%d\t%d/%d/%d\n", medicamentos[i].idMedicamento
               ,medicamentos[i].descripcion, medicamentos[i].precio, medicamentos[i].idLaboratorio
               ,medicamentos[i].stock, medicamentos[i].elaboracion.dia, medicamentos[i].elaboracion.mes
               ,medicamentos[i].elaboracion.anio,medicamentos[i].vencimiento.dia
               ,medicamentos[i].vencimiento.mes,medicamentos[i].vencimiento.anio);
    }
}

void compraronIbuprofeno(eMedicamento medicamentos[], eCliente clientes[], int tamC, int tamM)
{
    int idIbuprofeno;
    int i, j;

    for(i=0; i<tamM; i++)
    {
        if(strcmp(medicamentos[i].descripcion,"Ibuprofeno")==0)
        {
            idIbuprofeno = medicamentos[i].idMedicamento;
            break;
        }
    }
    printf("ID\t%10s\n", "NOMBRE");
    for(j=0; j<tamC; j++)
    {
        if(clientes[j].idMedicamento==idIbuprofeno)
        {
            printf("%d\t%10s\n", clientes[j].IdCliente, clientes[j].nombre);
        }
    }
}

void stockDisponible(eMedicamento medicamentos[], int tamM)
{
    char busqueda[50];
    int i;

    printf("Ingrese el stock del medicamento a buscar: ");
    fflush(stdin);
    gets(busqueda);
    for(i=0;i<tamM;i++)
    {
        if(strcmpi(medicamentos[i].descripcion,busqueda) == 0)
        {
            printf("Quedan %d unidades de %s\n", medicamentos[i].stock, medicamentos[i].descripcion);
        }
    }
}

int menu(char lista[])
{
    int opcion;
    printf("%s", lista);
    scanf("%d", &opcion);
    return opcion;
}

