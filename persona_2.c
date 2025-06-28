#include <stdio.h>

struct Persona {
    char nombre[30];
    int edad;
};

int main() {
    struct Persona personas[2] = {{"Lucas", 22}, {"Elena", 19}};

    for (int i = 0; i < 2; i++) {
        printf("Nombre: %s, Edad: %d\n", personas[i].nombre, personas[i].edad);
    }

    return 0;
}
