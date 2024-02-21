#include <stdio.h>
int suma(int, int);


int main() {
    char operador;
    double num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);

    printf("Ingrese la operación (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);
   
    switch (operador) {
        case '+':
            resultado=(num1,num2);
            break;
    }
     printf("%lf  %c %lf = %lf",num1,operador, num2, resultado);
    return 0; 
}

int suma(int num1, int num2){
    return num1+num2;
}