//
//  main.c
//  taller_en_clase_corte_2
//
//  Created by Jordan Minota on 9/05/23.
//


/*

TAREAS:

 - 1  Completar los otros menus deacuerdo al proyecto elegido
 - 2  Agregar en una función el procedimiento de la linea #62 y #63

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int end = 1;
    int opc = 0;
    int sub_opc = 0;
    
    while (end) { // validamos si es verdadero o falso
        printf("BIENVENIDE A MI PROGRAMA SELECCIONE SU OPCIÓN \n");
        printf("[1] AGREGAR UNA PLANTA \n");
        printf("[2] AGREGAR MATERIAL ORGÁNICO \n");
        printf("[3] INICIAR ASISTENTE \n");
        printf("[4] CANCELAR Y APAGAR \n");
        
        scanf("%d", &opc);
        // system("cls");
        
        printf("ACABAS DE SELECCIONAR LA OPCIÓN: %d \n", opc);
        
        // CONDICIONAL DEL MENU 1
        if (opc == 1) {
            
            printf("NUESTRAS PLANTAS DISPONIBLE SON: \n");
            printf("[1] HERBACEA \n");
            printf("[2] LEGUMBRE \n");
            printf("[3] HORTALIZA \n");
            printf("[4] VOLVER AL MENU PRINCIPAL \n");
            
            scanf("%d", &sub_opc);
            
            if (sub_opc == 1) {
                printf("GRACIAS POR ELEGIR LA OPCIÓN DE AGREGAR HERBACEA \n");
            } else if (sub_opc == 2) {
                printf("GRACIAS POR ELEGIR LA OPCIÓN DE AGREGAR LEGUMBRE \n");
            } else if (sub_opc == 3) {
                printf("GRACIAS POR ELEGIR LA OPCIÓN DE AGREGAR HORTALIZA \n");
            } else if(sub_opc == 4) {
                printf("VOLVIENDO AL MENU...");
            }
            
            printf("DESEA SALIR (0) O REGRESAR AL MENU PRINCIPAL (1) ");
            scanf("%d", &end);
            
            sub_opc = 0;
            
        } else if (opc == 2) {
            
            printf("QUE MATERIAL ORGANICO DESEAR APLICAR ? \n");
            printf("[1] ORGANICO AL 50 pc \n");
            printf("[2] ORGANICO AL 80 pc \n");
            printf("[3] ORGANICO AL 100 pc \n");
            printf("[4] VOLVER AL MENU PRINCIPAL \n");
            
        } else if (opc == 3) {
           
           printf("INICIANDO ASISTENTE... \n");
           printf("[1] SUSPENDER \n");
           printf("[2] ESTADISTICAS \n");
           printf("[3] APAGAR \n");
           printf("[4] VOLVER AL MENU PRINCIPAL \n");
           
       } else if (opc == 4) {
           printf("ACABAS DE CANCELAR, HASTA PRONTO... \n");
       }
        // end = 0;
    }
    
    // system("pause");
    return 0;
}

