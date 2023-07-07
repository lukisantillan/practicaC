#include <stdio.h>
/*
Reailiza una calculadora para calcular el indice de masa coroporal
*/
int main() {
    float peso,altura, masaCorporal;
    printf("Ingrese su peso en kg:  ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros( ejemplo 1.84): ");
    scanf("%f", &altura);

   
    masaCorporal = peso / (altura * altura);
    if (masaCorporal < 18.5){
        printf("El peso esta por debajo de lo normal");
    }
    else if ((masaCorporal >= 18.5) && (masaCorporal < 25)){
        printf("Tiene un peso saludable");
    }
    else if ((masaCorporal >= 25) && (masaCorporal < 30)){
        printf("Tiene Sobrepreso");
    }
    else if (masaCorporal > 30){
        printf("Tiene obesidad");
    }
    printf("\nSu IMC es %.2f", masaCorporal);

    return 0;

}