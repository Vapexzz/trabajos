#include<stdio.h>

int main() {
    int n, i;
    int suma = 0;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);

    for (i=1; i <= n; i++) {
        printf("i = %d\n", i);
        suma += i;
    }

    printf("La suma de los números de 1 a %d es: %d\n", n, suma);

    return 0;
}