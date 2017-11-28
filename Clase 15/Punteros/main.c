#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int* pInt = NULL;
    int var = 7;
    pInt = &var; //LE ASIGNO LA DIRECCION DE MEMORIA DE LA VARIABLE

    printf("\n\n\n%d\n",var); //ACCEDO AL VALOR DE VAR (7)
    printf("%d\n",*pInt); //ACCEDO AL VALOR AL QUE APUNTA *pInt (var)(7)
    printf("%p\n",&var); //ACCEDO A LA DIRECCION DE MEMORIA DE VAR (0022FF18)
    printf("%p\n",pInt); //ACCEDO A pInt QUE GUARDA LA DIRECCION DE MEMORIA DE VAR (LINEA 9) (0022FF18)
    printf("%p\n",&pInt); //ACCEDO A LA DIRECCION DE MEMEORIA DE pInt (0022FF1C)
    return 0;
}
