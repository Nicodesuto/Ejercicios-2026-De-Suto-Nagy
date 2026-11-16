#include <stdio.h>
int matriz[3][2][2];
int i;
int j;
int k;
int main()
{
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            for(k = 0; k<2; k++){ 
            printf("ingrese un numero en la capa %d, fila %d, columna %d\n", i, j, k);
            scanf("%d\t", &matriz[i][j][k]);
            }
        }
    }
    
    for (int i = 0; i < 2; i++) {
        printf("Capa %d\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d\t", matriz[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
