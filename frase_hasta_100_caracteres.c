#include <stdio.h>

int main(){
    char frase[100];

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < sizeof(frase); i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
    }

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            frase[i] = '-';
        }
    }

    printf("Frase modificada: %s\n", frase);

    return 0;
}
