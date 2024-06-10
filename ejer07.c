#include <stdio.h>
// Pide al usuario la longitud de los tres lados del triángulo y luego calcula y muestra el perímetro del triángulo.

int main() {
    float lt1;
    float lt2; 
    float lt3;
    float perim;
    
    printf("Introduzca la longitud del primer lado del triangulo: ");
    scanf("%f", &lt1);
    
    printf("Introduzca la longitud del segundo lado del triangulo: ");
    scanf("%f", &lt2);
    
    printf("Introduzca la longitud del tercer lado del triangulo: ");
    scanf("%f", &lt3);
    
    perim = lt1 + lt2 + lt3;
    
    printf("El perimetro del triangulo es: %.2f .\n", perim);
    
    return 0;
}
