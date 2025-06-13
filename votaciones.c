#include <stdio.h>

int main() {
    int votos[12];
    int contador_playa = 0;
    int contador_montana = 0;
    int contador_parque = 0;

    printf("\nIngrese los votos de los 12 estudiantes\n");
    printf(" (1 = Playa, 2 = Montana, 3 = Parque):\n");
    printf("\n");
    
    for (int estudiante = 0; estudiante < 12; estudiante++) {
        while (1) {
            printf("Voto del estudiante %d: ", estudiante + 1);
            scanf("%d", &votos[estudiante]);

            if (votos[estudiante] >= 1 && votos[estudiante] <= 3) {
                break;
            } else {
                printf("Por favor ingrese un valor entre 1 y 3.");
                while (getchar() != '\n');
            }
        }
    }

    for (int i = 0; i < 12; i++) {
        if (votos[i] == 1) {
            contador_playa++;
        } else if (votos[i] == 2) {
            contador_montana++;
        } else if (votos[i] == 3) {
            contador_parque++;
        }
    }
    printf("\nResultados de la votacion:\n");
    printf("Playa: %d votos\n", contador_playa);
    printf("Montana: %d votos\n", contador_montana);
    printf("Parque: %d votos\n", contador_parque);

    return 0;
}