#include <stdio.h>
#include <math.h>

int multiplica(int, int);

int main()
{
    int a, b, producto;
    printf ("\nTeclee dos números enteros: ");
    scanf ("%d %d", &a, &b);
    producto = multiplica(a, b);
    printf ("\nEl resultado es %d", producto);
}

int multiplica (int x, int y) {
    return (x * y);
}
