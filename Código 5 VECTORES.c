#include <stdio.h>

#define TAM 3  

void cargarVector(int v[], char nombre) {
    printf("Ingrese los elementos del vector %c:\n", nombre);
    for (int i = 0; i < TAM; i++) {
        printf("%c[%d]: ", nombre, i);
        scanf("%d", &v[i]);
    }
}


int productoEscalar(int a[], int b[]) {
    int producto = 0;
    for (int i = 0; i < TAM; i++) {
        producto += a[i] * b[i];
    }
    return producto;
}


int main() {
    int A[TAM], B[TAM];
    int resultado;

    cargarVector(A, 'A');
    cargarVector(B, 'B');

    resultado = productoEscalar(A, B);

    printf("\nEl producto escalar de A · B es: %d\n", resultado);

    return 0;
}
