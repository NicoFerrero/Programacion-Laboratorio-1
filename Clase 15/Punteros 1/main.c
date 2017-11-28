#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int pedirCaracter(char* caracter);

int main()
{
    char* ingreso = NULL;
    char valor;
    ingreso = &valor;
    int response;

    response = pedirCaracter(ingreso);
    if(response == 1)
    {
        printf("\n%c\n",valor);
    }
    else
    {
        printf("\nNo hay espacio en memoria");
    }
    return 0;
}

int pedirCaracter(char* caracter)
{
    int flag = 0;
    if(caracter != NULL)
    {
        printf("Ingrese un valor: ");
        *caracter = getche();
        flag = 1;
        return flag;
    }
    return flag;
}
