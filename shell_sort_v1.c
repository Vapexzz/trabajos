//Nombre: Juan Pinilla 
//Fecha: 21 de abril de 2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaramos la funcion que hara el trabajo
void ordenar_shell_sort(int lista_numeros[], int cantidad_total);

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

    // Forzamos el millon de datos como en tu codigo anterior
    cantidad_total = 1000000;
    int *lista_gigante = (int *)malloc(cantidad_total * sizeof(int));

    printf("Leyendo %d datos... \n", cantidad_total);
    for (i = 0; i < cantidad_total; i++) {
        fscanf(archivo_datos, "%d", &lista_gigante[i]);
    }
    fclose(archivo_datos); 

    printf("Lectura en proceso, Empezando Shell Sort...\n");

    // Tomamos foto del reloj
    tiempo_inicio = clock();

    // Llamamos al algoritmo Shell
    ordenar_shell_sort(lista_gigante, cantidad_total);

    // Paramos el reloj
    tiempo_final = clock();

    segundos_que_tardo = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    
    printf("\n    Resultados del Shell Sort    \n");
    printf("Tiempo que demoro = %.3f segundos\n", segundos_que_tardo);

    free(lista_gigante);
    return 0;
}

// Algoritmo Shell Sort
void ordenar_shell_sort(int lista_numeros[], int cantidad_total) {
    int salto, i, auxiliar, cambios;
    
    for (salto = cantidad_total / 2; salto != 0; salto = salto / 2) {
        cambios = 1;
        while (cambios != 0) {
            cambios = 0;
            for (i = salto; i < cantidad_total; i++) {
                if (lista_numeros[i - salto] > lista_numeros[i]) {
                    auxiliar = lista_numeros[i];
                    lista_numeros[i] = lista_numeros[i - salto];
                    lista_numeros[i - salto] = auxiliar;
                    cambios++;
                }
            }
        }
    }
}