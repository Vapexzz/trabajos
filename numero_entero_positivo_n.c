#include <stdio.h>

int main(){
    int n, i, suma = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {

        printf("El numero debe ser positivo.\n");
        return 1; 
    }

    for (i = 3; i <= n; i += 3) {
        suma += i;
    }

    printf("La suma de los multiplos de 3 que sean menores o iguales a %d es: %d\n", n, suma);

    return 0;
}