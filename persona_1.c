#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    struct Persona p1 = {"Ana", 20};
    printf("Nombre: %s, Edad: %d\n", p1.nombre, p1.edad);
    return 0;
}
