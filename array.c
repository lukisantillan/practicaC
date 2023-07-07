/*
Hacer una funcion que permita al usuario agregar datos al array
*/
#include <stdio.h>
#define TAMAÑO 10
int main(){
    int array1[TAMAÑO];
    printf("Ingrese 10 numeros enteros: ");
    for (int i = 0; i < TAMAÑO; i++)
    {
        printf("\nIndice [%d] del array:  ",i);
        scanf("%d", &array1[i]);
    }
    printf("El array ingresado es: ");
    for ( int j = 0; j < TAMAÑO; j++)
    {
        printf("\narray[%d] = %d", j,array1[j]);
    }
    
    return 0;
}
/*
Es una variable que nos permite guardar muchos datos en el mismo lugar(lista), un array en C debe contener todos datos del mismo
tipo
Se declara de la siguiente manera: tipo nombre[tamaño] por ejemplo:
EJ 1 = int array1[5]
EJ 2 = Podemos definir previamente una constante y declararlo de la siguiente manera
#define TAMAÑO 5; ((CONSTANTE)) 
int main(){
    int array2[TAMAÑO];

}
EJ 3 = 
int array3[] = {0,1,2,3,4} de esta forma directamente ponemos los datos que tiene el array

*/