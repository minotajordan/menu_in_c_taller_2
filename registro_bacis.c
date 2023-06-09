#include <stdio.h>

struct Rol {
    char nombre[50];
    char salario[50];
}

struct Persona {        // OBJETO
    char nombre[50];        // ATRIBUTOS
    int edad;               // ATRIBUTOS
    int altura;             // ATRIBUTOS M - 1.66 , 120, 190
};

int main() {
    struct Persona p;

    printf("Ingrese el nombre: ");
    scanf("%s", p.nombre);

    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);

    printf("Ingrese la altura: ");
    scanf("%f", &p.altura);

    printf("Datos de la persona:\n");
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f\n", p.altura);

    return 0;
}
