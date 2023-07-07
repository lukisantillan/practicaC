#include <stdio.h>
/* Hacer un programa que muestre en pantalla unicamente los numeros pares entre 1 y 30
*/
int main() {
    int i;
    for (i = 1; i <= 30; i++)
    {
        if ((i % 2)==0)
        {
            printf("\n%d", i);
        }
        
    }
    
    return 0;
}