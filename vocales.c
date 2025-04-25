#include <stdio.h>

int main() {
    char frase[100];
    int i, vocales = 0;

    fgets(frase, 100, stdin);

    for (i=0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            vocales++;
        } 
    }

    printf("Cantidad de vocales: %d\n", vocales);

    return 0;
}