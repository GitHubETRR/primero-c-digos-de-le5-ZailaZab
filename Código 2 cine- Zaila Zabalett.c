
#include <stdio.h>


const int PRECIO_ENTRADA = 2000;


void mostrarMenu();
void mostrarCartelera();
void comprarEntradas();

int main() {
    int opcion;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarCartelera();
                break;
            case 2:
                comprarEntradas();
                break;
            case 3:
                printf("Gracias por visitar el cine ZaiWorld!\n");
                break;
            default:
                printf("Opcion invalida, Intente de nuevo.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}


void mostrarMenu() {
    printf("\nCine ZaiWorld\n");
    printf("1 - Ver cartelera\n");
    printf("2 - comprar entradas\n");
    printf("3 - Salir\n");
    printf("Ingrese una opcion: ");
}


void mostrarCartelera() {
    char *peliculas[] = {
        "1. Batman",
        "2. StarWars",
        "3. Superman",
        "4. Harry Potter",
        "5. Minions"
    };

    printf("\nCartelera:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", peliculas[i]);
    }
}


void comprarEntradas() {
    int entradas, totalEntradas = 0;

    printf("Ingrese cantidad de entradas (0 para terminar): ");
    scanf("%d", &entradas);

    while (entradas != 0) {
        totalEntradas += entradas;
        printf("Entradas agregadas\n");
        printf("Ingrese cuantas entradas mas quiere comprar (0 para terminar): ");
        scanf("%d", &entradas);
    }

    int precioTotal = totalEntradas * PRECIO_ENTRADA;
    printf("Total de entradas vendidas: %d\n", totalEntradas);
    printf("Precio total a pagar: %d pesos\n", precioTotal);
}
