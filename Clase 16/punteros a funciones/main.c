#include <stdio.h>
#include <stdlib.h>
void print();
int incremento(int);
int inputInt();
int main()
{

    int miNumero;
    void (*funcion)();

    funcion = &print;
    (*funcion)();

    int (*ingresaEntero)();

    ingresaEntero=&inputInt;

   miNumero= (*ingresaEntero)();

    printf("El numero es: %d", miNumero);

    int (*incrementar)(int);

    incrementar=&incremento;

    miNumero=(*incrementar)(5);
        printf("El numero es: %d", miNumero);



    return 0;
}

void print()
{
    printf("Hola a todos!!!\n");
}

int inputInt()
{
    int numero;
    printf("Ingrese un numero");
    scanf("%d", &numero);
    return numero;
}

int incremento(int x)
{
    x++;
    return x;
}
