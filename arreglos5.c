#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    //TODO: (14) Declara un arreglo de tres apuntadores a entero
    int *a[3];
    
    //TODO: (15) Asigna a cada apuntador la dirección de las variables a, b y c
    a[0] = 10;
    b[1] = 20;
    c[2] = 30;
    //TODO: (16) Mostrar los valores usando los punteros
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ]\n");
    
    return 0;
}
