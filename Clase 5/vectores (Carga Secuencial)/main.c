#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    int i;
    int suma = 0;
    int aux;

    for(i = 0; i < 5; i++)//Cargo el vector
    {
        printf("Ingrese un valor para el elemento %d: ", i + 1);
        scanf("%d", &v[i]);
        //aux = v[i];
        //suma += aux;
    }

    for(i = 0; i < 5; i++)//Listado del vector
    {
        printf("\nEl elemento %d tiene el valor: %d ", i + 1, v[i]);
    }

    for(i = 0; i < 5; i++)//Suma de elementos del vector
    {
        aux = v[i];
        suma += aux;
    }

    printf("\n\nLa suma de los numeros dentro del vector es: %d\n", suma);
    //printf("\n%d", v);

    return 0;
}
