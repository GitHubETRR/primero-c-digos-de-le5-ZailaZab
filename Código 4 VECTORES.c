#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100  


void cargarVector(int v[]) {
    for (int i = 0; i < TAM; i++) {
        v[i] = 10 + rand() % 31; 
    }
}

void encontrarMaxMin(int v[], int *maximo, int *minimo) {
    *maximo = v[0];
    *minimo = v[0];
    for (int i = 1; i < TAM; i++) {
        if (v[i] > *maximo)
            *maximo = v[i];
        if (v[i] < *minimo)
            *minimo = v[i];
    }
}

void mostrarPosicionesMaximo(int v[], int maximo) {
    printf("El valor máximo es: %d\n", maximo);
    printf("Se repite en las posiciones: ");
    for (int i = 0; i < TAM; i++) {
        if (v[i] == maximo) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int vector[TAM];
    int max, min;

    srand(time(NULL));

    cargarVector(vector);
    encontrarMaxMin(vector, &max, &min);
    mostrarPosicionesMaximo(vector, max);

    printf("El valor mínimo es: %d\n", min);

    return 0;
}

