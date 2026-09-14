#include <stdio.h>
int vector[5],x;
int i;

int main()
{
    for(x=0;x<5;x++)
    {
        printf("ingrese el valor del dato\n");
        scanf("%d", &vector[x]);
    }
    for(i=0;i<5;i++)
    {
        printf("valor del dato: %d\n", vector[i]);
    }
}
