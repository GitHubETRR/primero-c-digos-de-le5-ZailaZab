#include <stdio.h>


void remover_salto_de_linea(char *cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == '\n') {
            cadena[i] = '\0';
            return;
        }
        i++;
    }
}

int Dimension(const char *s) {
    const char *inicio = s;

    return (int)(s - inicio);
}

int main() {
   
    char texto[100];
    const int MAX_TAMANO = sizeof(texto);
    
    printf("--- Calculadora de Longitud de Cadena ---\n");
    printf("Ingrese un texto (max %d caracteres): ", MAX_TAMANO - 1);
    
    if (fgets(texto, MAX_TAMANO, stdin) == NULL) {
        printf("Error de lectura de entrada.\n");
        return 1;
    }
    
    remover_salto_de_linea(texto);
    int largo_cadena = Dimension(texto);
    
    printf("\nEl texto ingresado es: \"%s\"\n", texto);
    printf("La longitud de la cadena (Dimension) es: %d\n", largo_cadena);
    
    return 0;
}