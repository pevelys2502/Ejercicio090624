#include <stdio.h>

// Pide al usuario el radio del círculo y luego calcula y muestra la circunferencia del círculo.

int main() {
    float radio;
    float circun;
    float pi;
    
    printf("Introduzca el radio del circulo:");
    scanf("%f", &radio);
    
    pi=3.14159265359;
    circun = 2*pi*radio;
    
    printf("La circunferencia del circulo es: %.2f .\n", circun);
    
    return 0;
}
