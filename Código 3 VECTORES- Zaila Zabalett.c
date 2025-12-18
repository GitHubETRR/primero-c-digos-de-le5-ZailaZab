#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50
int contarMayor(int vector[], int tamaño) {
    int maximo = vector[0];
    int contador = 1;

    for (int i = 1; i < tamaño; i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
    }

    contador = 0;
    for (int i = 0; i < tamaño; i++) {
        if (vector[i] == maximo) {
            contador++;
        }
    }

    printf("El valor máximo es: %d\n", maximo);
    printf("Se repite %d veces.\n", contador);

    return contador;
}

int main() {
    int vector[TAM];
    srand(time(NULL)); 
    for (int i = 0; i < TAM; i++) {
        vector[i] = 10 + rand() % 11;  
    }

    printf("Vector generado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n\n");

    contarMayor(vector, TAM);

    return 0;
}

