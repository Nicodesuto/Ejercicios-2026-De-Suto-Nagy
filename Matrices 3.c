#include <stdio.h>
int matriz[4][4];
int main() {
    matriz[0][0] = 0;
    matriz[0][1] = 0;
    matriz[1][0] = 0;
    matriz[1][1] = 1;
    matriz[2][0] = 1;
    matriz[2][1] = 0;
    matriz[3][0] = 1;
    matriz[3][1] = 1;
    
    for (int i = 0; i < 4; i++) {
        matriz[i][2] = matriz[i][0] && matriz[i][1];
        matriz[i][3] = matriz[i][0] || matriz[i][1];

    }
    printf("A\tB\tAND\tOR\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
