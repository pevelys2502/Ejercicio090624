#include <stdio.h>
// Escribe un programa que le pida al usuario su nombre y luego le muestre un mensaje de saludo personalizado.
int main() {
    char nombre[40];

    printf("Cual es tu nombre?: ");
    scanf("%s", nombre);

    printf(" %s, es un placer conocerte", nombre);

    return 0;
}
