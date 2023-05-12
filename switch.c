#include <stdio.h>

int main()
{
    const int a = 5, b = 4, c = 8;
    int opc = 4;
    char* cout;
    
    
    switch (a) // dirección
    {
        case (a < 5): // en caso de que se cumpla la condición
            cout = "A -> ";
            printf("A %s", cout);
            break;
        case (b < 5):
            cout = "B -> ";
            printf("B %s", cout);
            break;
        default:
            cout = "None -> ";
            printf("DEFAULT %s", cout);
            break;
    }
}



