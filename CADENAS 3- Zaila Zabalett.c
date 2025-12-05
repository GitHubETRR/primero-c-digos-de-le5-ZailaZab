#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remover_salto_de_linea(char *cadena) {

    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }
}

void pasaMinuscula(char *texto) {
    while (*texto) {
        *texto = (char)tolower((unsigned char)*texto);
         
        texto++;
    }
}

int vocales(const char *texto) {
    int contador_vocales = 0;

    while (*texto) {

        switch (*texto) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contador_vocales++;
                break;
        }
     texto++;
    }
    return contador_vocales;
}
int main() {

    char texto[100];
    const int MAX_TAMANO = sizeof(texto);
    
    printf("Minúsculas y Conteo de Vocales\n");
    printf("ponga un texto que incluya mayúsculas y espacios: ");
   
    if (fgets(texto, MAX_TAMANO, stdin) == NULL) {
        printf("Error de lectura de entrada.\n");
        return 1;
    }
    
    remover_salto_de_linea(texto);

    printf("\nTexto Original: \"%s\"\n", texto);

    pasaMinuscula(texto);
    printf("Texto en Minúsculas: \"%s\"\n", texto);

    int cuenta_vocales = vocales(texto);
    
    printf("\nRESULTADO FINAL: El número de vocales es: %d\n", cuenta_vocales);
    
    return 0;
}