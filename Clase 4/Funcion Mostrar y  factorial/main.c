#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    int numero;

    int resultado;

    numero = getInt("Ingrese un numero: ");
    resultado = factorial(numero);

    printf("El factorial de %d es: %d", numero, resultado);
    mostrar("\nHola a todos");
    return 0;
}


