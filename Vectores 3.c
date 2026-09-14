#include <stdio.h>
int vector[5],x;
int num=0;
int main()
{
    for(x=0;x<5;x++)
    {
        printf("ingrese el valor de la casilla\n");
        scanf("%d", &vector[x]);
    }
    do
    {
         printf("ingrese el índice de la casilla a la cual quiere acceder (ingrese 5 para finalizar el programa): \n");
         scanf("%d", &num);
         if (num==5)
         {
             printf("programa finalizado");
            break;
         }
          if (num < 0 || num > 4)
         {
             printf("El índice debe estar entre 0 y 4\n");
          }
        else
        {
            printf("El valor del índice indicado es: %d\n", vector[num]);
        }
    }while (num!=5);
    return 0;
}
