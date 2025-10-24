#include <stdio.h>

int sumarVector(int v[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int v[n];
    
    printf("Ingrese los %d elementos del vector:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int resultado = sumarVector(v, n);

    printf("La suma de los elementos del vector es: %d\n", resultado);

    return 0;
}

