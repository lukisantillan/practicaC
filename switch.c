#include <stdio.h>
/*Ejercicio para practicar switch, realice una función que le permita al usuario ingresar un numero del 1-7 y que cada uno represente
un dia de la semana, depende el numero que ingrese, deberá mostrar por pantalla el dia que eligio.
*/
int main(){
    int diaDeLaSemana;
    printf("Ingrese un numero entre el 1-7: ");
    scanf("%d",&diaDeLaSemana);
    switch (diaDeLaSemana)
    {
    case 1:
        printf("Hoy es Lunes");
        break;
    case 2:
        printf("Hoy es Martes");
        break;
    case 3:
        printf("Hoy es Miercoles");
        break;
    case 4:
        printf("Hoy es Jueves");
        break;
    case 5:
        printf("Hoy es Viernes");
        break;
    case 6:
        printf("Hoy es Sabado");
        break;
    case 7:
        printf("Hoy es Domingo");
        break;
    
    default:
        printf("No elegiste ningun numero que represente un dia");
        break;
    }
    
    
    
    
    
    return 0;
}
/*
Utilizamos SWITCH para poder determinar distintos casos de una variable, y no utilizar muchos else if
*/