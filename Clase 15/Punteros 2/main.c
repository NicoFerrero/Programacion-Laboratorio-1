#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pInt = NULL;
    int var = 7;
    int* otroP = NULL;

    pInt = &var;
    otroP = pInt;

    *pInt = 9;
    printf("%d",*otroP);

    return 0;
}
