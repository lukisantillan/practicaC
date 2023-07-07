#include <stdio.h>
/* Usando if, realiza una funcion que permita identificar si un numero es par o impar y me lo muestre por pantalla
*/
int main(){
    int numero;
    printf("INGRESE UN NUMERO:  ");
    scanf("%d",&numero);
    if ((numero % 2) == 0)
    {
        printf("El numero %d, es par", numero);
    }
    else {
        printf("El numero %d, es impar",  numero);
    }
    
    return 0;
}
/*
los if se representan mediante if(condicion) { estructura a ejecutar; }, podemos utilizar un else if con la misma estructura
o un else tambien 
*/