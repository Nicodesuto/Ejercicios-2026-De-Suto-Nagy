#include <stdio.h>
typedef struct alumno{
    char nombre[30];
    int edad;
    int año;
};
int main()
{
    struct alumno alumno1;
    printf("Ingrese el nombre del alumno: \n");
    scanf("%s\n", &alumno1.nombre);
    printf("Ingrese la edad del alumno\n");
    scanf("%d\n", &alumno1.edad);
    printf("Ingrese año\n");
    scanf("%d\n", &alumno1.año);
    
    printf("nombre: %s\n", alumno1.nombre);
    printf("edad: %d\n", alumno1.edad);
    printf("año: %d\n", alumno1.año);
    return 0;
}
