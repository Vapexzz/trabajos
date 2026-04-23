//Nombre: Juan Pinilla 
//Fecha: 21 de abril de 2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funciones para que el Quick Sort funcione
void intercambiar(int* a, int* b);
int particion(int lista[], int bajo, int alto);
void ordenar_quick_sort(int lista[], int bajo, int alto);

int main() {
    FILE *archivo_datos;
    int cantidad_total, i;
    clock_t tiempo_inicio, tiempo_final; 
    double segundos_que_tardo;

    // Abrimos el archivo de texto
    // archivo_datos = fopen("datos_aleatorios.txt", "r");  // Caso aleatorio:
    // archivo_datos = fopen("datos_ordenados.txt", "r"); // Caso ordenado:
     archivo_datos = fopen("datos_inversos.txt", "r"); // Caso inverso:

    if (archivo_datos == NULL) {
        printf("Oops! No encontre el archivo.\n");
        return 1; 
    }

    cantidad_total = 1000000;
    int *lista_gigante = (int *)malloc(cantidad_total * sizeof(int));

    printf("Leyendo %d datos... \n", cantidad_total);
    for (i = 0; i < cantidad_total; i++) {
        fscanf(archivo_datos, "%d", &lista_gigante[i]);
    }
    fclose(archivo_datos); 

    printf("Lectura en proceso, Empezando Quick Sort...\n");

    tiempo_inicio = clock();

    // Llamamos al algoritmo Quick Sort
    ordenar_quick_sort(lista_gigante, 0, cantidad_total - 1);

    tiempo_final = clock();

    segundos_que_tardo = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    
    printf("\n    Resultados del Quick Sort    \n");
    printf("Tiempo que demoro = %.3f segundos\n", segundos_que_tardo);

    free(lista_gigante);
    return 0;
}

// Funcion simple para cambiar numeros de posicion
void intercambiar(int* a, int* b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

// Parte el arreglo en dos para ordenar mas rapido
int particion(int lista[], int bajo, int alto) {

    // Calculamos cual es la posicion de la mitad y la intercambiamos con la ultima
    int mitad = bajo + (alto - bajo) / 2;
    intercambiar(&lista[mitad], &lista[alto]);

    int pivote = lista[alto];
    int i = (bajo - 1);
    int j;
    
    for (j = bajo; j <= alto - 1; j++) {
        if (lista[j] <= pivote) {
            i++;
            intercambiar(&lista[i], &lista[j]);
        }
    }
    intercambiar(&lista[i + 1], &lista[alto]);
    return (i + 1);
}

// Funcion principal del Quick Sort
void ordenar_quick_sort(int lista[], int bajo, int alto) {
    if (bajo < alto) {
        int punto_corte = particion(lista, bajo, alto);
        ordenar_quick_sort(lista, bajo, punto_corte - 1);
        ordenar_quick_sort(lista, punto_corte + 1, alto);
    }
}