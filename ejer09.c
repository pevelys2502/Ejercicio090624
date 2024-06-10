#include <stdio.h>

// Solicita al usuario un número de segundos y luego conviértelo y muestra la cantidad equivalente en horas, minutos y segundos.

int main() {
    int segunt;
    int hora; 
    int minuto;
    int segundo;
    
    printf("Introduzca la cantidad de segundos a calcular: ");
    scanf("%d", &segunt);
    
    hora = segunt / 3600;
    minuto = (segunt % 3600) / 60;
    segundo = (segunt % 3600) % 60;
    
    printf("%d segundos son equivalentes a:\n", segunt);
    printf("%d horas, %d minutos y %d segundos.\n", hora, minuto, segundo);
    
    return 0;
}