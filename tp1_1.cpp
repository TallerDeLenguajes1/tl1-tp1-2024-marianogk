#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;

    puts("hola mundo");

    printf("Contenido del puntero: %d \n", *p);
    printf("Direccion de memoria almacenada en el puntero: %d \n", p);
    printf("Direccion de memoria de la variable: %d \n", &a);
    printf("Direccion de memoria del puntero: %d \n", &p);
    printf("Tamano de memoria de la variable: %d \n", sizeof(int));
    return 0;
}
