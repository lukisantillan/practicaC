#include <stdio.h>
/*Ejercicio para practicar inputs, realice una funcion que le permita al usuario ingresar la nota de dos parciales por teclado, y que luego
informe por pantalla la nota de cada parcial y la nota final.
*/
int main() {
    float prueba1,prueba2;
    printf("Ingrese el numero de la nota del primer parcial: ");
    scanf("%f", &prueba1);
    printf("Ingrese el numero de la nota del segundo parcial:");
    scanf("%f", &prueba2);

    float notaFinal;
    notaFinal = (prueba1 + prueba2) / 2;
    printf("Nota primer parcial : %f", prueba1);
    printf("\nNota segundo parcial : %f", prueba2); /*usamos \n para hacer saltos de linea en la consola*/
    printf("\nEl resultado de la nota final es %.2f", notaFinal); /*usamos el .2 para indicar que muestre dos decimales despues de la coma*/
    return 0;
};
/*
LOS SCANF  permiten al usuario ingresar un dato a traves del teclado, como si fuera un input, su estructura
es: primero poner un printf con lo que queremos preguntar, y abajo un SCANF con entre comillas el tipo de
dato a ingresar, y separado de una coman la variable donde queremos guardarlo
*/