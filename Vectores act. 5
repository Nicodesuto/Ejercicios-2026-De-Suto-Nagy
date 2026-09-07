#include <stdio.h>
int vector[10],x;
int x, j;
int aux;
int prom;
int sum;
void promedio(float sum)
{
    prom = sum/10;
    printf("El promedio de los valores del vector es: %d\n", prom);
}
int main()
{
    printf("Ingrese los valores del vector\n");
    for(x=0;x<10;x++)
    {
        printf("ingrese el valor de la casilla %d\n", x);
        scanf("%d", &vector[x]);
        sum=sum + vector[x];
    }
    for(x=0; x<10; x++)
    {
        for (j=x+1; j<10; j++)
        {
         if (vector[x]>vector[j])
         {
             aux=vector[x];
             vector[x]=vector[j];
             vector[j]=aux;
         }
        }
    }
    for(x=0; x<10; x++)
    {
        printf("%d\n", vector[x]);
    }
    promedio(sum);
    return 0;
}
