#include <stdio.h>
#include <ctype.h> // este es necesario para la función tolower :)

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
void pasaMinuscula(char *texto) {
    while (*texto) {
        
        *texto = (char)tolower((unsigned char)*texto);
        
        texto++;
    }
}

int main() {
    char texto[100];
    const int MAX_TAMANO = sizeof(texto);
    
    printf("--- EJERCICIO 2: Transformar a Minúsculas ---\n");
    printf("Ingrese un texto (mezclando mayúsculas y minúsculas): ");
    
    if (fgets(texto, MAX_TAMANO, stdin) == NULL) {
    
        printf("Error de lectura de entrada.\n");
        return 1;
    }

    remover_salto_de_linea(texto);
    printf("\nTexto Original: \"%s\"\n", texto);

    pasaMinuscula(texto);
    printf("Texto en Minúsculas: \"%s\"\n", texto);
    
    return 0;
}