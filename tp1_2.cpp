#include <stdio.h>

int cuadrado(int n);
void cuadrado2(int n);
void invertir(int a, int b);
void orden(int a, int b);


int main()
{
    int n, a, b;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    /*muestro la direccion y el contenido*/
    printf("\nDireccion de la variable: %d", &n);
    printf("\nContenido de la variable: %d", n);

    printf("\nCuadrado de %d es: %d", n, cuadrado(n));
    printf("\nCuadrado void de %d es: ", n);
    cuadrado2(n);

    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    invertir(a, b);

    orden(a,b);

    return 0;
}

int cuadrado(int n)
{
    return n * n;
}

void cuadrado2(int n)
{
    printf("%d", n * n);
}

void invertir(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
}

void orden(int a, int b){
    int aux;
    if (a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    printf("\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
}