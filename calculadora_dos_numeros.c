#include <stdio.h>

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
    float num1, num2, resultado;
    int opcion;

    printf("\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
 
    printf("\n     Operaciones disponibles:\n");
    printf("====================================\n");
    printf("\n");
    printf("Seleccione una operacion:\n");
    printf("\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("\n");
    printf("Seleccione una operacion (1 - 4): ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            resultado = sumar(num1, num2);  
            printf("\nResultado: %.f\n", resultado);
            printf("====================================\n");   
            break;  
        case 2:
            resultado = restar(num1, num2);
            printf("\nResultado: %.f\n", resultado);
            printf("====================================\n");
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            printf("\nResultado: %.f\n", resultado);
            printf("====================================\n");
            break;
        case 4:
            resultado = dividir(num1, num2);

            if (num2 == 0.0f) {
                printf("\nError: No se puede dividir por cero.\n");
                printf("====================================\n");
            } else {
                printf("\nResultado: %.f\n", resultado);
                printf("====================================\n");
            }
            break;
        default:
            printf("\nOpcion no valida.\n");
    }
    printf("====================================\n");

    return 0;
}

float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}
float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0.0f) {
        return 0.0f;
    }
    return a / b;
}