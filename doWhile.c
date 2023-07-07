#include <stdio.h>
/*contador con ciclo do while, para entender el funcionamiento*/
int main() {
    int contador = 0;
    do
    {
        contador ++;
    } while (contador < 5);
    printf("contador = %d", contador);
    return 0;
}

/*
Mientras la condicion se cumpla, entra en el ciclo while, SIEMPRE QUE SE CUMPLA, cuando la condicion de False, no entra más al ciclo
Tambien existe el ciclo DO WHILE, a diferencia del while, el DO WHILE, permite que el codigo se ejecute antes de la condición, asi que 
este ciclo nos permite que el codigo se ejecute al menos una vez, su estructura es:
do{
    codigo a ejecutar;
}while(condición);

*/