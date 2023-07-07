#include <stdio.h>
#define NUM 10

int main() {
    char nombre[NUM];
    printf("Ingrese su nombre:  ");
    gets(nombre); //Almacenar datos del arreglo
    puts(nombre);

    return 0;
}

/*
FUNCIONES PUTS Y GETS, PUTS ES PARA ALMACENAR DATOS EN EL ARRAY Y GETS PARA LEERLOS. gets es como una especie de input.
Para ingresar los datos de manera manual le ponemos un asterisco(*) antes del nombre de la variable del array, y los declaramos
debajo, Ejemplo:

char *frutas[3];
frutas[0] = "Banana"
frutas[1] = "Frutilla"
frutas[2] + "Naranja"
*/