#include <stdio.h>

int calcularSuma(int vector[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += vector[i];
    }
    return suma;
}


float calcularPromedio(int vector[], int tamaño) {
    int suma = calcularSuma(vector, tamaño);
    return (float)suma / tamaño;
}

int main() {
    int tamaño;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tamaño);

    int vector[tamaño];

    for (int i = 0; i < tamaño; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    int suma = calcularSuma(vector, tamaño);
    float promedio = calcularPromedio(vector, tamaño);

    printf("\nLa suma de los elementos es: %d\n", suma);
    printf("El promedio de los elementos es: %.2f\n", promedio);

    return 0;
}
