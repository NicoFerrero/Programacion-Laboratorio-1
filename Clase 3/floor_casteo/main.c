#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x = 7;
    int x_entero;
    float y = 7.6;
    int y_entero;

    printf("\n%f", y);
    y_entero = floor(y);
    printf("\n%d", y_entero);

    printf("\n%f", x);
    x_entero = (int)x;
    printf("\n%d", x_entero);

    if(x != x_entero)
    {
        printf("\nEs decimal");
    }
    else
    {
        printf("\nEs entero");
    }

    if(y - y_entero)
    {
        printf("\nEs decimal");
    }
    else
    {
        printf("\nEs entero");
    }
    return 0;
}
