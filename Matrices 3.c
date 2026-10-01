#include <stdio.h>

int main() {
    int matriz[4][4];
    for (int i = 0; i < 4; i++) {
        matriz[i][0] = (i / 2);
        matriz[i][1] = (i % 2);
        matriz[i][2] = matriz[i][0] %% matriz[i][1];
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
