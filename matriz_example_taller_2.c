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

// ADD data al array iterando
int main() {
   // Declaración del array de enteros
   int numeros[5];
    //[0 ] [1 ] [2 ] [3 ] [4]
    //[10] [55] [77] [33] [44]

   // Guardar datos en el array utilizando un bucle
   int i;
   for (i = 0; i < 5; i++) { // FOR ( INI VAR, CONDICIONAL, INCRE O DECRE )
       printf("Ingrese el número para la posición %d: ", i);
       scanf("%d", &numeros[i]);
   }

   // Mostrar los datos del array
   printf("Los números almacenados son: ");
   for (i = 0; i < 5; i++) {
       printf("%d ", numeros[i]);
   }
   printf("\n");
    
    // Vamos a buscar información
    printf("INGRESA TU NUMERO A BUSCAR PARA VER SI EXISTE: ");
    int find;
    scanf("%d", &find);
    
    for (i = 0; i < 5; i++) {
        if (find == numeros[i]) {
            printf("ENCONTRASTE EL VALOR ENTONCES SI EXISTE.");
            i = 5;
        }
    }

   return 0;
}




