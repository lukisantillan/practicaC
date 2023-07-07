#include <stdio.h>
/*
Hacer una calculadora que permita sumar, restar, multiplicar y dividir
*/

float calculadora(int n1, int n2, char simbolo);

int main(){
    char operacion;
    int numero1, numero2;
    float resultado;

    printf("Ingrese la operacion a realizar(+ - * /):    ");
    scanf("%c", &operacion);

    printf("Ingrese el primer numero de la operacion:    ");
    scanf("%d", &numero1);

    printf("Ingrese el segundop numero de la operacion:    ");
    scanf("%d", &numero2);

    resultado = calculadora(numero1,numero2,operacion);
    printf("El resultado de la operación: %c entre los numeros %d y %d es : %.1f", operacion,numero1,numero2,resultado);
    return 0;
}

float calculadora(int n1, int n2, char simbolo) {
    float calculo;
    switch (simbolo)
    {
    case '+':
        calculo = n1 + n2;
        break;
    case '-':
        calculo = n1 - n2;
        break;
    case '*':
        calculo = n1 * n2;
        break;
    case '/':
        calculo = n1 / n2;
        break;
    }
    return calculo;
}
/*
Funciones de biblioteca,  podemos incluir bibliotecas a traves del #include. 
Por ejemplo:
    <stdio.h>
    -printf() --> mostrar en pantalla
    -scanf() --> permitir ingresar datos y almacenarlos en una variable
    -getchar()
    -putchar()
    <math.h>
    -sqrt()
    -pow(x,y)
    -sin(x)  --> seno
    -cos(x) --> coseno
    <ctype.h>
    - isdigit(c) --> saber si es un digito(numero)
    -isalpha(c) --> saber si es una letra
*/