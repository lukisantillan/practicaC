#include <stdio.h>
/*Realiza un ejercicio para implementar el ciclo do while, donde pida al usuario ingresar el precio de las ventas por teclado
y me muestre las ventas totales cuando el usuario ingrese 0
*/
int main(){
    float ventaCliente,ventaTotal;
    ventaTotal = 0;
    do
    {
        printf("Ingrese la venta de hoy(0 cuando no haya mas ventas):    ");
        scanf("%f", &ventaCliente);
        ventaTotal += ventaCliente;
    } while (ventaCliente != 0);
    printf("La venta total del dia es: %.2f", ventaTotal);
    
    return 0;
}