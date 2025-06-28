#include <stdio.h>

// Definimos un tipo personalizado
struct Persona {
    char nombre[30];
    int edad;
};

// Función que recibe una estructura por valor
void mostrarPersona(struct Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
}

// Función que intenta cambiar la edad (no afecta a la original)
struct Persona cambiarEdad(struct Persona p, int nuevaEdad) {
    p.edad = nuevaEdad;
    return p; // Retornamos la estructura modificada
}

int main() {
    struct Persona p1 = {"Carla", 21};

    printf("Antes del cambio:\n");
    mostrarPersona(p1);

    // p1 no cambia a menos que reemplacemos su valor
    p1 = cambiarEdad(p1, 30);

    printf("\nDespués del cambio:\n");
    mostrarPersona(p1);

    return 0;
}
