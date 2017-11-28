#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "inc/input.h"

int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    int flag;
    int entero;

    printf("%s", message);
    scanf("%d", &entero);

    if(entero >= lowLimit && entero <= hiLimit)
    {
        *input = entero;
        flag = 1;
    }
    else
    {
        printf("%s", eMessage);
        flag = 0;
    }

    return flag;
}

int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    int flag;
    float flotante;

    printf("%s", message);
    scanf("%f", &flotante);

    if(flotante >= lowLimit && flotante <= hiLimit)
    {
        *input = flotante;
        flag = 1;
    }
    else
    {
        printf("%s", eMessage);
        flag = 0;
    }

    return flag;
}

int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
    int flag;
    char caracter;

    printf("%s", message);
    caracter = toupper(getche());

    if(caracter >= lowLimit && caracter <= hiLimit)
    {
        *input = caracter;
        flag = 1;
    }
    else
    {
        printf("%s", eMessage);
        flag = 0;
    }

    return flag;
}


int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    int flag;
    char string[50];

    printf("%s", message);
    fflush(stdin);
    gets(string);

    if(strlen(string) >= lowLimit && strlen(string) <= hiLimit)
    {
        strcpy(input, string);
        flag = 1;
    }
    else
    {
        printf("%s", eMessage);
        flag = 0;
    }

    return flag;
}

