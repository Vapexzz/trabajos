#include <stdio.h>

struct Persona {
    char nombre[30];
    int edad;
};

void cambiarEdad(struct Persona *p, int nuevaEdad) {
    p->edad = nuevaEdad;
}

int main() {
    struct Persona p1 = {"Jorge", 25};

    cambiarEdad(&p1, 30);
    printf("Nombre: %s, Edad actualizada: %d\n", p1.nombre, p1.edad);
    return 0;
}
