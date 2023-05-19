#include <stdio.h>
#include <math.h>

int multiplica_retorna(int, int);
void multiplica_no_retorna(int, int);

int main() {
    int a = 5, b = 4, producto;
    producto = multiplica_retorna(a, b);
}

int multiplica_retorna (int x, int y) {
    printf("Ejecutando retorna");
    return (x * y);
}

void multiplica_no_retorna (int x, int y) {
    printf("El resultado es: %d", x * y);
}



