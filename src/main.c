/*
 * main.c
 * Programa principal para la práctica de bibliotecas.
 * IE-0117 - I-2026
 */

#include <stdio.h>
#include "stats.h"

int main(void) {
    int datos[] = {5, 3, 8, 1, 9, 2};
    int n = 6;

    printf("Datos: ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", datos[i]);
    printf("\n");

    printf("Suma:     %d\n",   suma(datos, n));
    printf("Promedio: %.2f\n", promedio(datos, n));
    printf("Minimo:   %d\n",   minimo(datos, n));
    printf("Maximo:   %d\n",   maximo(datos, n));

    return 0;
}
