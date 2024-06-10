#include <stdio.h>

// Solicita al usuario la base y la altura del triángulo y luego calcula y muestra el área del triángulo.

int main() {
    float base;
    float altura;
    float area;
    
    printf("Introduzca la base del triangulo: ");
    scanf("%f", &base);
    
    printf("Introduzca la altura del triangulo: ");
    scanf("%f", &altura);
    
    area = base*altura/2;
    
    printf("El área del triangulo es: %.2f.\n", area);
    
    return 0;
}

