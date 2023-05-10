#include <stdio.h>

int main() {
    /*
        tipo_dato nombre_arreglo [tamaño_fila][tamaño_columna];

        1, 2,  3,  4            0 - 1 - 2 - 3
        5, 6,  7,  8        0 - 1,  2,  3,  4
        9, 10, 11, 12       1 - 5,  6,  7,  8
                            2 - 9,  10, 11, 12
     */
    
    int matriz[3][4] = {1,2,3,4,   5,6,7,8,   9,10,11,12};
    
    printf("MANUEL [2][3] \n %d \n", matriz[2][3]);
    
    printf("Matriz [0][0] \n %d \n", matriz[0][0]);
    printf("Matriz [0][1] \n %d \n", matriz[0][1]);
    printf("Matriz [0][2] \n %d \n", matriz[0][2]);
    printf("Matriz [0][3] \n %d \n", matriz[0][3]);
    
    
    printf("Matriz [1][0] \n %d \n", matriz[1][0]);
    printf("Matriz [1][1] \n %d \n", matriz[1][1]);
    printf("Matriz [1][2] \n %d \n", matriz[1][2]);
    printf("Matriz [1][3] \n %d \n", matriz[1][3]);

    return 0;
}



