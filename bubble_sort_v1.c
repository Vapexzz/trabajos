//Nombre: Juan Pinilla y 
//Fecha: 21 de abril de 2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaramos la funcion que hara el trabajo lento pero seguro
void ordenar_bubble_sort(int lista_numeros[], int cantidad_total);

int main() {
    FILE *archivo_datos;
    int cantidad_total, i;
    clock_t tiempo_inicio, tiempo_final; 
    double segundos_que_tardo;

    // Abrimos el archivo de texto
archivo_datos = fopen("datos_aleatorios.txt", "r");  // Caso aleatorio:
// archivo_datos = fopen("datos_ordenados.txt", "r"); // Caso ordenado:
// archivo_datos = fopen("datos_inversos.txt", "r"); // Caso inverso:
    if (archivo_datos == NULL) {
        printf("No se encontro el archivo.\n");
        return 1; 
    }

    cantidad_total = 1000000;
    int *lista_gigante = (int *)malloc(cantidad_total * sizeof(int));

    printf("Leyendo %d datos... \n", cantidad_total);
    for (i = 0; i < cantidad_total; i++) {
        fscanf(archivo_datos, "%d", &lista_gigante[i]);
    }
    fclose(archivo_datos); 

    printf("Lectura en proceso, Empezando Bubble Sort (ve por un cafe, esto tardara mucho)...\n");

    // Tomama foto del reloj
    tiempo_inicio = clock();

    // Llama al algoritmo burbuja
    ordenar_bubble_sort(lista_gigante, cantidad_total);

    // Para el reloj
    tiempo_final = clock();

    segundos_que_tardo = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    
    printf("\n    Resultados del Bubble Sort    \n");
    printf("Tiempo que demoro = %.3f segundos\n", segundos_que_tardo);

    free(lista_gigante);
    return 0;
}

    // Algoritmo bubble short
void ordenar_bubble_sort(int lista_numeros[], int cantidad_total) {
    int i, j, auxiliar;
    
    // Da pasadas por toda la lista una y otra vez
    for(i = 0; i < cantidad_total - 1; i++) {
        // En cada pasada, va empujando el numero mas grande hacia el final
        for(j = 0; j < cantidad_total - i - 1; j++) {
            
            // Si el numero actual es mayor que el siguiente, los intercambia
            if (lista_numeros[j] > lista_numeros[j + 1]) {
                auxiliar = lista_numeros[j + 1];
                lista_numeros[j + 1] = lista_numeros[j];
                lista_numeros[j] = auxiliar;
            }
        }
    }
}