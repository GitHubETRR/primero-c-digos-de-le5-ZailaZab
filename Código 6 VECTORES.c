#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TVECTOR 20 

void CargaVector(int vector[], int tamanio);
void InvertirVector(int original[], int invertido[], int tamanio);
void MostrarVector(int vector[], int tamanio);

int main()
{
    int original[TVECTOR];
    int invertido[TVECTOR]; 
    
    srand(time(NULL));
    printf("¡HOLAA ESTE PROGRAMA LO QUE HACE ES INVENTIR UN VECTOR!\n");

    CargaVector(original, TVECTOR);
    printf("\nVECTOR ORIGINAL:\n");
    MostrarVector(original, TVECTOR);
    InvertirVector(original, invertido, TVECTOR);
    printf("\nVECTOR INVERTIDO:\n");
    MostrarVector(invertido, TVECTOR);

    return 0;
}

void CargaVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++) {
        vector[i] = rand() % (90 - 20 + 1) + 20;
    }
}

void InvertirVector(int original[], int invertido[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++) {
        invertido[i] = original[tamanio - 1 - i];
    }
}

void MostrarVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }
}