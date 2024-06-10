#include <stdio.h>
// Solicita al usuario la longitud de un lado del cuadrado y luego calcula y muestra el área del cuadrado.

int main() {
    float lado;
    float area;
    
    printf("Introduzca la longitud de un lado del cuadrado: ");
    scanf("%f", &lado);
    
    area = lado*lado;
    
    printf("El area del cuadrado es: %.2f .\n", area);
    
    return 0;
}
