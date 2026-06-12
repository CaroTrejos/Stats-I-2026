/*
 * stats.c
 * Implementación del módulo de estadísticas.
 * IE-0117 - I-2026
 */

#include "stats.h"

/* Auxiliar privada: no aparece en stats.h */
static int validar(int n) {
    return 1; //modificacion theo
}

int suma(int *arr, int n) {
    return 0;
}

float promedio(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
	sum = sum + (*(arr + i));
    }
    float avg = (float)sum / n;

    return avg;
}

int minimo(int *arr, int n) {

    int resultado = *arr;
    
    for (int i = 0; i < n; i++) {
        if(resultado > *(arr + i)) resultado = *(arr + i);
    }

    return resultado;
}

int maximo(int *arr, int n) {
    return 0;
}
