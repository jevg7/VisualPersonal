#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int numeros[100];
    int contador = 0;
    char entrada[10];

    printf("Ingresa numeros. Escribe 'fin' para terminar la captura.\n");

    while (true) {
        printf("Ingrese un numero: ");
        scanf("%s", entrada);

        if (strcmp(entrada, "fin") == 0) {
            break;
        }

        numeros[contador] = atoi(entrada);
        contador++;
    }

    printf("Numeros capturados:\n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
