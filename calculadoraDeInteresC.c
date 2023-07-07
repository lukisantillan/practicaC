#include <stdio.h>

int main(){
    double dinero,compraAnual, interesAnual = 0;
    int cantidadDeAños,i;

    printf("Dinero Invertido:   ");
    scanf("%lf", &dinero);

    printf("Compra Anual:   ");
    scanf("%lf", &compraAnual);

    printf("Cantidad de Años a invertir:    ");
    scanf("%d", &cantidadDeAños);

    printf("Interes Anual:  ");
    scanf("%lf", &interesAnual);

    double total = dinero;

    for ( i = 0; i < cantidadDeAños; i++)
    {
        total += compraAnual;
        total = total + (interesAnual * total / 100);
    }

    printf("En %d años tendrás %.2lf ", cantidadDeAños,total);
    
    return 0;
}