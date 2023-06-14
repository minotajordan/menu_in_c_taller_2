
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTOS 100

// Definición de la estructura del registro
struct Contacto {
    char nombre[50];
    char telefono[20];
    char email[50];
};

// Función para agregar un contacto a la lista
void agregarContacto(struct Contacto contactos[], int *numContactos) {
    if (*numContactos >= MAX_CONTACTOS) {
        printf("La lista de contactos está llena.\n");
        return;
    }

    struct Contacto nuevoContacto;

    printf("Ingrese el nombre: ");
    scanf("%s", nuevoContacto.nombre);

    printf("Ingrese el teléfono: ");
    scanf("%s", nuevoContacto.telefono);

    printf("Ingrese el email: ");
    scanf("%s", nuevoContacto.email);

    contactos[*numContactos] = nuevoContacto;
    (*numContactos)++;

    printf("Contacto agregado correctamente.\n");
}

// Función para mostrar la lista completa de contactos
void mostrarContactos(struct Contacto contactos[], int numContactos) {
    if (numContactos == 0) {
        printf("La lista de contactos está vacía.\n");
        return;
    }

    printf("Lista de contactos:\n");

    for (int i = 0; i < numContactos; i++) {
        printf("Contacto %d:\n", i + 1);
        printf("Nombre: %s\n", contactos[i].nombre);
        printf("Teléfono: %s\n", contactos[i].telefono);
        printf("Email: %s\n", contactos[i].email);
        printf("\n");
    }
}

// Función para buscar un contacto por nombre
void buscarContacto(struct Contacto contactos[], int numContactos, char nombre[]) {
    int encontrado = 0;

    for (int i = 0; i < numContactos; i++) {
        if (strcmp(contactos[i].nombre, nombre) == 0) {
            printf("Contacto encontrado:\n");
            printf("Nombre: %s\n", contactos[i].nombre);
            printf("Teléfono: %s\n", contactos[i].telefono);
            printf("Email: %s\n", contactos[i].email);
            printf("\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contacto no encontrado.\n");
    }
}

int main() {
    struct Contacto contactos[MAX_CONTACTOS];
    int numContactos = 0;
    
    int opcion;
    char nombre[50];
    
    do {
        printf("Seleccione una opción:\n");
        printf("1. Agregar contacto\n");
        printf("2. Mostrar contactos\n");
        printf("3. Buscar contacto por nombre\n");
        printf("4. Salir\n");
        
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                agregarContacto(contactos, &numContactos);
                break;
            case 2:
                mostrarContactos(contactos, numContactos);
                break;
            case 3:
                printf("Ingrese el nombre del contacto a buscar: ");
                scanf("%s", nombre);
                buscarContacto(contactos, numContactos, nombre);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                
                
                break;
        }
        
    } while (opcion != 4);
    
    return 0;
    
}
