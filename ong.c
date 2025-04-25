#include <stdio.h>

int main() {
    int existencias = 1000;
    int entregadas = 0;

    while (existencias >= 200) {
        printf("Introduzca el número de unidades entregadas: ");
        scanf("%d", &entregadas);

        existencias = existencias - entregadas;
    }

    printf("El inventario ha bajado de 200 unidades. Debe comunicarlo\n");
}