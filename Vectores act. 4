#include <stdio.h>
int vector1[5],x;
int vector2[5];
void comparar (int vector1[], int vector2[])
{
    for(x = 0; x < 5; x++)
    {
        if(vector1[x] > vector2[x])
        {
            printf("En la posicion %d, el mayor es %d y corresponde al Vector 1\n", x, vector1[x]);
        }
        else if(vector2[x] > vector1[x])
        {
            printf("En la posicion %d, el mayor es %d y corresponde al Vector 2\n", x, vector2[x]);
        }
        else
        {
            printf("En la posicion %d, los dos valores son iguales: %d\n", x, vector1[x]);
        }
    }
}
int main()
{
    printf("Ingrese los valores del vector 1\n");
    for(x=0;x<5;x++)
    {
        printf("ingrese el valor de la casilla %d\n", x);
        scanf("%d", &vector1[x]);
    }
    printf("Ingrese los valores del vector 2\n");
    for(x=0;x<5;x++)
    {
        printf("ingrese el valor de la casilla %d\n", x);
        scanf("%d", &vector2[x]);
    }
    
    comparar(vector1, vector2);
    return 0;
}
