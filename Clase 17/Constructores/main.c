#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

typedef struct
{
    int edad;
    char nombre[15];
    char color[15];
}eCaballo;

eCaballo* newCaballo();//Constructor por defecto
eCaballo* newCaballoParametrizado(int edad, char* nombre, char* color);//Constructor parametrizado
void mostrarCaballo(eCaballo*);

int main()
{
    eCaballo* miCaballo;
    eCaballo* establo[TAM];
    int i;
    int edad;
    char nombre[15];
    char color[15];

    for(i=0;i<TAM;i++)
    {
        system("cls");
        printf("CABALLO %d\n",i+1);
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombre);
        printf("Ingrese el color: ");
        fflush(stdin);
        gets(color);
        printf("Ingrese la edad: ");
        scanf("%d",&edad);
        miCaballo = newCaballoParametrizado(edad, nombre, color);
        *(establo+i) = miCaballo;
    }
    system("cls");
    printf("NOMBRE--EDAD--COLOR\n");
    for(i=0;i<TAM;i++)
    {
        if(*(establo+i)!=NULL)
        {
            mostrarCaballo(*(establo+i));
        }
    }

    return 0;
}

eCaballo* newCaballo()
{
    eCaballo* miCaballo;
    miCaballo = (eCaballo*) malloc(sizeof(eCaballo));
    return miCaballo;
}

eCaballo* newCaballoParametrizado(int edad, char* nombre, char* color)
{
    eCaballo* caballo;
    caballo = newCaballo();
    if(caballo!= NULL)
    {
      caballo->edad = edad;
      strcpy(caballo->nombre,nombre);
      strcpy(caballo->color,color);
    }
    return caballo;
}

void mostrarCaballo(eCaballo* caballo)
{
    printf("%s--%d--%s\n", caballo->nombre, caballo->edad, caballo->color);
}
