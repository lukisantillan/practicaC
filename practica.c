#include <stdio.h>

int main() {
    int numero_uno = 1;
    int numero_dos = 4;
    numero_uno += numero_dos;
    printf("Esta es la suma de los dos numeros %d ", numero_uno);
    return 0;
};

/*
Para representar los datos dentro de los printf se usa lo siguiente
%c PARA UN UNICO CARACTER
%d Para un ENTERO
%u Para un entero sin signo en base decimal
%o ENTERO en base octal
%x ENTERO en base hexa
%e un numero REAL CON COMA FLOTANTE, CON EXPONENTE
%f un nunmero REAL CON COMA FLOTANTE, SIN EXPONENTE
%s una CADENA DE CARACTERES
%p un PUNTERO O DIRECCIÓ DE MEMORIA
RECORDAR PONER ; AL FINAL DE LOS RENGLONES QUE DEBEN TERMINAR LA EJECUCIÓN
\n para salto de linea en los printf
ggc -o NOMBRE FINAL DEL ARCHIVO archivoAcompilar.c
./NOMNBRE FINAL para ejecutar
*/

