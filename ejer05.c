#include <stdio.h>

// Pide al usuario la longitud de un lado del cuadrado y luego calcula y muestra el perímetro del cuadrado.

int main() {
    float lado;
    float perim;
    
    printf("Introduzca la longitud de un lado del cuadrado: ");
    scanf("%f", &lado);
    
    perim = 4*lado;
    
    printf("El perimetro del cuadrado es: %.2f.\n", perim);
    
    return 0;
}
