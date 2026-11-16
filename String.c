/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int vector[5], x, i, j, num;
char end[20];
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
    printf("desea CONTINUAR o FINALIZAR el programa %d");
    scanf(" %s", end);
    if(strcmp(end, "FINALIZAR")==0){
        return 0;
    }
    else if (strcmp(end, "CONTINUAR")==0){
        cambio();
    }
    }while (strcmp(end, "FINALIZAR")!=0);
    return 0;
}
