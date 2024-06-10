#include <stdio.h>
//Crea un programa que funcione como una calculadora básica. Permita al usuario ingresar dos números y luego seleccione una operación matemática (+, -, *, /) 
//para realizar la operación y mostrar el resultado.
int main() {
    float num1;
    float num2;
    char opera;
    float result;


 
printf("Introduzca operador de calculo: + para suma, - para resta * para multiplicar, / para dividir )");
scanf("%c", &opera);
   
 printf("Introduzca primer  numero: ");
 scanf("%f", &num1);

 printf("Introduzca segundo  numero ");
 scanf("%f", &num2);
 
 
  
    switch (opera) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: División por cero");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;
        default:
            printf("Error: Operador inválido");
    }

    return 0;
}
