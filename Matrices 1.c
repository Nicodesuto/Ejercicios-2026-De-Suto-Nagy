#include <stdio.h>
int matriz[3][2];
int i;
int j;
int main()
{
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("ingrese un numero en la fila %d, columna %d\n", i, j);
            scanf("%d\t", &matriz[i][j]);
        }
    }
     printf("Matriz ingresada:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
