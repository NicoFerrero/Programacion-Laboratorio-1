#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var;
    int* p;
    p = &var;

    //ARITMETICA DE PUNEROS//
    printf("%p\n",p);
    printf("%p\n",p+0); //ME MUEVO A TRAVES DE LA MEMORIA
    printf("%p\n",p+1); //ME MUEVO A TRAVES DE LA MEMORIA
    printf("%p\n",p+2); //ME MUEVO A TRAVES DE LA MEMORIA
    printf("%p\n",p-1); //ME MUEVO A TRAVES DE LA MEMORIA
    p++; //MUEVO EL PUNTERO
    printf("%p\n",p);
    printf("%p\n",p+1); //ME MUEVO A TRAVES DE LA MEMORIA


    return 0;
}
