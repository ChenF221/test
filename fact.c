/*
Realice un diagrama de flujo y el código en C que, calcule el factorial de un número positivo 
dado por el usuario. El programa debe ejecutarse eternamente hasta que el usuario ingrese 
un 0.
*/

#include<stdio.h>

int factorial(int numero) {
    int fact = 1;
    for (int i = numero; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, res;
    num = res = 0;

    do {
        printf("Introducir un numero (0 para salir): ");
        scanf("%i", &num);

        if (num == 0) {
            printf("Saliendo del programa...\n");
        } else {
            res = factorial(num);
            printf("El factorial de %d es: %d\n", num, res);
        }
    } while (num != 0);

    return 0;
}
