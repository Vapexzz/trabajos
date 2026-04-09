#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// Genera el numero random
int generar_numero(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Chequea si escribieron fin
int es_fin(char texto[]) {
    char temporal[20];
    int posicion_letra; 
    
    // Pasamos todo a minuscula para comparar mas facil
    for(posicion_letra = 0; texto[posicion_letra] != '\0'; posicion_letra++) {
        temporal[posicion_letra] = tolower(texto[posicion_letra]); 
    }
    
    // Cerramos el texto
    temporal[posicion_letra] = '\0';
    
    // Da 1 si es exactamente la palabra fin
    if(strcmp(temporal, "fin") == 0) {
        return 1; 
    }
    return 0; 
}

// Valida que no metan letras raras en vez de numeros
int es_numero(char texto[]) {
    int posicion = 0;
    
    // Ignoramos el signo menos si es negativo
    if(texto[0] == '-') {
        posicion = 1;
    }
    
    // Falso si solo pusieron un guion
    if(texto[posicion] == '\0') {
        return 0; 
    }
    
    // Revisamos caracter por caracter
    while(texto[posicion] != '\0') {
        // Si pillamos algo que no es numero, da falso
        if(!isdigit(texto[posicion])) {
            return 0; 
        }
        posicion++;
    }
    
    return 1; // Todo bien, es numero
}

// Logica principal del juego
void jugar() {
    int limite_inferior, limite_superior, numero_secreto, intento_usuario;
    int cantidad_intentos = 0; 
    char entrada_teclado[20]; 

    // Ciclo para obligar a poner un limite inferior valido
    while(1) {
        printf("Ingrese el Limite Inferior: ");
        scanf("%s", entrada_teclado);
        
        if(es_numero(entrada_teclado) == 1) {
            limite_inferior = atoi(entrada_teclado); // Todo ok, guardamos el numero
            break; // Rompemos este ciclo y seguimos
        } else {
            printf("Error: Solo se permiten numeros.\n\n");
        }
    }

    // Ciclo para obligar a poner un limite superior valido
    while(1) {
        printf("Ingrese el Limite Superior: ");
        scanf("%s", entrada_teclado);
        
        if(es_numero(entrada_teclado) == 1) {
            limite_superior = atoi(entrada_teclado); // Todo ok, guardamos el numero
            break; // Rompemos este ciclo y seguimos
        } else {
            printf("Error: Solo se permiten numeros.\n\n");
        }
    }

    printf("\n===============================================================\n");
    printf("Adivina el numero entre %d y %d\n", limite_inferior, limite_superior);
    printf("=================================================================\n\n");

    // Sacamos el numero ganador
    numero_secreto = generar_numero(limite_inferior, limite_superior);

    // Ciclo que se repite hasta que gane o se rinda
    while(1) {
        printf("Introduce un numero o pulsa FIN para salir: ");
        scanf("%s", entrada_teclado);

        // Vemos si puso fin
        if(es_fin(entrada_teclado) == 1) {
            break; // Salimos del juego
        }

        // Evitamos que el programa falle si ponen letras
        if(es_numero(entrada_teclado) == 0) {
            printf("Error: Por favor ingresa un numero valido o la palabra FIN.\n\n");
            continue; // Volvemos a pedir sin contar el intento
        }

        // Lo pasamos a entero
        intento_usuario = atoi(entrada_teclado);

        // Que no se salga del rango
        if(intento_usuario < limite_inferior || intento_usuario > limite_superior) {
            printf("Fuera de rango. Intentalo de nuevo\n\n");
            continue; 
        }

        // Sumamos el intento
        cantidad_intentos++;

        // Revisamos si le atino
        if(intento_usuario == numero_secreto) {
            printf("HAS ACERTADO!!! Despues de %d intentos\n", cantidad_intentos);
            break; // Gano, rompemos el ciclo
        } else if(intento_usuario > numero_secreto) {
            printf("El numero buscado es menor\n\n");
        } else {
            printf("El numero buscado es mayor\n\n");
        }
    }
}

int main() {
    // Activamos los numeros aleatorios
    srand(time(NULL));
    
    // Arrancamos el juego
    jugar();
    
    return 0;
}