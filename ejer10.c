#include <stdio.h>

// Solicita al usuario su peso en kilogramos y su altura en metros, y luego calcula y muestra su IMC.

int main() {
    float peso;
    float altura;
    float result;
     
    
    printf("Introduzca el peso en kilogramos: ");
    scanf("%f", &peso);
    
    printf("Introduzca la altura en metros: ");
    scanf("%f", &altura);
    
    result = peso/(altura*altura);
    
    printf("El Indice de Masa Corporal es: %.2f.\n", result);
    
    return 0;
}
