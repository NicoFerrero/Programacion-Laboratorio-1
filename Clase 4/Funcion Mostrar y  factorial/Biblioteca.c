#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

void mostrar(char cad[])
{
    printf("%s", cad);
}

int factorial(int numero)
{
    int factorialAux = 1;
    int i;

    for(i = numero; i > 0; i--)
    {
        factorialAux = factorialAux * i;
    }
    return factorialAux;
}

int getInt(char cad[])
{
    int numeroAux;
    printf("%s", cad);
    scanf("%d", &numeroAux);
    return numeroAux;
}
