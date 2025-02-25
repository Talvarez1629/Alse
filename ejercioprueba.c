#include <stdio.h>

int main() {
    int n;
    
    // Solicitar el número
    printf("Ingrese un numero para comprobar: ");
    scanf("%d", &n);

    int op = n % 2;  // Calcula el residuo de la división entre 2

    // Condicionales para determinar si el número es positivo o negativo
    if (n > 0 && op == 0) {
        printf("El numero es positivo y par\n");
    } else if (n > 0 && op != 0) {
        printf("El numero es positivo e impar\n");
    } else if (n < 0 && op == 0) {
        printf("El numero es negativo y par\n");
    } else {
        printf("El numero es negativo e impar\n");
    }

    return 0;
}
