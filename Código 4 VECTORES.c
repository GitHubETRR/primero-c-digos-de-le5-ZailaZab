#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100 
void cargarVector(int v[]) {
    for (int i = 0; i < TAM; i++) {
        v[i] = 10 + rand() % 31; 
    }
}

void mostrarVector(int v[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vector[TAM];
    srand(time(NULL)); 

    cargarVector(vector);  
    printf("Contenido del vector:\n");
    mostrarVector(vector);  
    return 0;
}
