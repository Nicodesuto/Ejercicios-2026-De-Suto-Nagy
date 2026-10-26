#include <stdio.h>
int matriz[4][4]={
    {0, 0, 0, 0},
    {0, 1, 0, 1},
    {1, 0, 0, 1},
    {1, 1, 1, 1},
};
int main() {
    printf("A\tB\tAND\tOR\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// definir matriz
// int matriz[2][3] = {
//{1, 2, 3},
//{4, 5, 6}
//};
// definir matriz
// int matriz[2][3] = {
//{1, 2, 3},
//{4, 5, 6}
//};
