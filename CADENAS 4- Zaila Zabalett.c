#include <stdio.h>

int mi_strlen(const char *s) {
    int count = 0;
   
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

void mi_swap_char(char *a, char *b) {
    char temp = *a; 
    *a = *b;    
    *b = temp;
}

int mi_fgets(char *buffer, int max_size) {
    int c;
    int i = 0;
    
    while (i < max_size - 1 && (c = getchar()) != EOF && c != '\n') {
        buffer[i++] = (char)c;
    }
    
    if (c == '\n') {
        buffer[i++] = (char)c;
    }
    
    buffer[i] = '\0'; 

    if (i == 0 && c == EOF) {
        return -1; 
    }
    return 0;
}

void remover_salto_de_linea(char *cadena) {
    
    int len = mi_strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }
}

void Invertir(char *texto) {
    int longitud = mi_strlen(texto);

    char *p_inicio = texto;
    char *p_fin = texto + longitud - 1;

    while (p_inicio < p_fin) {
        
        mi_swap_char(p_inicio, p_fin); 

        p_inicio++;
        p_fin--;
    }
}

int main() {
    char texto[100];
    const int MAX_TAMANO = sizeof(texto);
    
    printf("Swapchar Cadena :) \n");
    printf("texto: ");
    
    if (mi_fgets(texto, MAX_TAMANO) == -1) {
        printf("Error de lectura de entrada.\n");
        return 1;
    }
    
    remover_salto_de_linea(texto);

    printf("\nTexto Original: \"%s\"\n", texto);

    Invertir(texto);
    
    printf("Texto Invertido: \"%s\"\n", texto);
    
    return 0;
}