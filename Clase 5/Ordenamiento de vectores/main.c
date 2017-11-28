#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int vector[TAM] = {3, 1, 4, 9, 5};
    int i;
    int j;
    int aux;

    for(i = 0; i < TAM - 1; i++) //Nunca llega a la ultima posicion (TAM - 1)
    {
        for(j = i + 1; j < TAM; j++)
        {
            if(vector[i] > vector[j]) //De mayor a menor (vector[i] < vector[j]) || De menor a mayor (vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    printf("\t\t\tOrdenamiento Burbuja\n");

    for(i = 0; i < TAM; i++)
    {
        printf("%d, ", vector[i]);
    }

    return 0;
}
