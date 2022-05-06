#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filas,i,x,j,cantidad=0;

    printf("Ingrese cantidad de filas: ");
    scanf("%d",&filas);
    fflush(stdin);

    printf("\n");
    if(filas>0)
    {
    for(i=0;i<filas;i++)
    {
        for(x=0;x<filas-i;x++)
        {
            printf(" ");
        }
        if(x==0)
        {
            cantidad=1;
        }
        else
        {
            cantidad=cantidad+2;
        }
        for(j=1;j<cantidad;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        }
        else
        {
            printf("Error");
        }
    return 0;
}
