#include <stdio.h>
/*Ejercicio para practicar for, Realice un programa que calcule el promedio de la nota de 10 estudiantes en un examen final*/

int main() {
    float nota,promedio, sumaNotas = 0;
    int cantidadAlumnos,i;
    printf("¿La nota de cuantos alumnos  quiere ingresar?");
    scanf("%d",&cantidadAlumnos);
    for (i = 1; i <= cantidadAlumnos; i++)
    {
        printf("Ingrese Nota del alumno %d: ",i);
        scanf("%f", &nota);
        sumaNotas += nota; 
    }
    promedio = sumaNotas / cantidadAlumnos;
    printf("El promedio de las notas de %d alumnos, es: %.2f", cantidadAlumnos, promedio);
    
    return 0;
}

/*
Tambien tiene una condición, tenemos integrado un contador, cuando ese contador es igual al valor ingresado, deja de ejecutar el codigo 
su sintaxis es:
for(int cont= 0; cont < numero; cont++) {
    codigo a ejecutar;
}

el cont++ hace referencia a como queremos que cambie la variable de contador, en este caso incrementandolo en 1
*/