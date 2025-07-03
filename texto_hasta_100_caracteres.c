#include <stdio.h>

int main(){
    char texto[100];
    int digitos[10] = {0};
    int espacios = 0;
    int otros = 0;

    printf("Ingrese una linea de texto: ");
    fgets(texto, 100, stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c >= '0' && c <= '9') {
            digitos[c - '0']++;
        }
        else if (c == ' ') {
            espacios++;
        }
        else if (c != '\n') {
            otros++;
        }
    }

    printf("Digitos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, digitos[i]);
    }
    printf("Espacios: %d\n", espacios);
    printf("Otros: %d\n", otros);

    return 0;
}
