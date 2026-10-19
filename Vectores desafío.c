#include <stdio.h>
#include <string.h>
int vector[5], x, i, j, num;
char end;
void cambio(){
    do{
    printf("selecciona el indice del numero a cambiar: %d");
    scanf("%d", &j);
    } while(j>=5);
    printf("escribe el nuevo numero: %d");
    scanf("%d", &num);
    printf("el nuevo numero en la posicion %d es %d\n", j, num);
}
int main()
{
    for(x=0; x<5; x++){
        printf("ingrese el valor del vector en el indice %d: ", x);
        scanf("%d", &vector[x]);
    }
    printf("Los valores cargados son:%d\n");
    for(i=0;i<5; i++){
         printf("%d\n", vector[i]);
    }
    do{
    printf("¿Terminar programa (s-n)? %d");
    scanf(" %c", &end);
    if(end == 's'){
        return 0;
    }
    else if (end == 'n'){
        cambio();
    }
    }while (end!= 's');
    return 0;
}
