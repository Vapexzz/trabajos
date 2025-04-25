#include<stdio.h>

int main() {
    int num1, num2, suma;

    printf("Introduce el primer número: ");
    scanf("%d", &num1);

    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma es: %d\n", suma);
    
    return 0;
}