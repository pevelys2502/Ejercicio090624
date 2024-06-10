#include <stdio.h>
// Desarrolla un programa que convierta unidades de temperatura entre Celsius y Fahrenheit. El usuario debe ingresar el valor y la unidad original, 
// y el programa debe mostrar la conversión a la otra unidad.
int main() {
    char unidad;
    float temp;
    float result;

    printf("Introduzca la Escala de temperatura a calcular: C para Celsius o F para Fahrenheit ");
    scanf(" %c", &unidad);
        
    printf("Introduzca los grados de temperatura: ");
    scanf("%f", &temp);
        
        
    if (unidad == 'C' || unidad == 'c') {
            result=(temp * 9/ 5) + 32;
            printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", temp, result);
    } else if (unidad == 'F' || unidad == 'f') {
            result=(temp - 32.0) * 5 / 9;
            printf("%.2f Fahrenheit equivale a %.2f Celsius.\n", temp, result);
    } else {
            printf("La Escala Introducida no es correcta.\n");
    }
        
    return 0;
    }