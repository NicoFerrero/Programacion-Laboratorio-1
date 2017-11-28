#include <stdio.h>
#include <stdlib.h>
#include "inc/input.h"

int main()
{
    int edad;
    float precio;
    char continuar;
    char nombre[50];
    int r; // Respuesta

    // EJEMPLO DE USO DE getInt
    r = getInt(&edad,"Cual es tu edad?: ","Rango valido [1 - 100]",1,100);
    if(r == 1)
    {
        printf("\nLa edad es: %d\n",edad);
    }

    // EJEMPLO DE USO DE getFloat
    r = getFloat(&precio,"Cual es el precio?: ","Rango valido [1 - 10000]",1,10000);
    if(r == 1)
    {
        printf("\nEl precio es: %0.2f\n",precio);
    }

    // EJEMPLO DE USO DE getChar
    r = getChar(&continuar,"Ingrese Opcion [A][B][C]: ","Solo [A][B][C]",'A','C');
    if(r == 1)
    {
        printf("\nContinuar: %c\n",continuar);
    }

    // EJEMPLO DE USO DE getChar
    r = getString(nombre,"Cual es tu nombre nombre?: ","El largo debe ser entre 1 y 50", 1, 50);
    if(r == 1)
    {
        printf("\nNombre: %s\n",nombre);
    }

    return 0;
}
