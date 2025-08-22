//Autor 1: Juan Pinilla Alegría
//Autor 2: Benjamin hormazábal diaz

#include <stdio.h>

int collatz(int n) {
    int pasos = 1;  // se inicializa la variable pasos en 1, ya que el numero inicial cuenta como un paso
    while (n != 1) {  // se ejecuta el ciclo hasta que n sea igual a 1
        if (n % 2 == 0)  // si el numero es par se divide por 2
            n = n / 2;  // si el numero es par se divide por 2
        else  // si el numero es impar se multiplica por 3 y se le suma 1
            n = n * 3 + 1;  // si el numero es impar se multiplica por 3 y se le suma 1
        pasos++;  // se incrementa el contador de pasos
    }
    return pasos;
}

void imprimir_secuencia(int n) { 
    while (n != 1) {  // se ejecuta el ciclo hasta que n sea igual a 1
        printf("%d ", n);  // se imprime el numero actual
        if (n % 2 == 0)  // si el numero es par se divide por 2
            n = n / 2;  // si el numero es par se divide por 2
        else
            n = n * 3 + 1; // si el numero es impar se multiplica por 3 y se le suma 1
    }
    printf("1\n");  // se imprime el 1 al final de la secuencia
}

int main() {
    int inicio, fin, max = 0, num = 0;
    printf("====================================\n");
    printf("     ingrese un numero entero\n");
    printf("====================================\n");
    printf("\nInicio: ");  // se le debe de colocar algun numero de inicio 
    scanf("%d", &inicio); 
    printf("Fin: "); //  se le debe de colocar algun numero de fin
    scanf("%d", &fin);

    for (int i = inicio; i <= fin; i++) {   // se recorre el rango de numeros desde inicio hasta fin
        int pasos = collatz(i);  // se obtiene la cantidad de pasos para cada numero
        if (pasos > max) {  // si la cantidad de pasos es mayor que el maximo encontrado hasta ahora
            max = pasos;    // se actualiza el maximo
            num = i;    // se actualiza el numero que tiene la secuencia mas larga
        }
    }
    printf("Numero con secuencia mas larga: %d (pasos: %d)\n", num, max); // se imprime el numero con la secuencia mas larga y la cantidad de pasos
    printf("Secuencia: "); // se imprime la secuencia del numero con la secuencia mas larga
    imprimir_secuencia(num); // se imprime la secuencia del numero con la secuencia mas larga
    printf("====================================\n");
    return 0;
}