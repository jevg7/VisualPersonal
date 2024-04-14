#include <stdio.h>

int main(void)
{
    int numbers[2];

    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;
    numbers[3] = 6;
    numbers[4] = 1;

    printf("Elemento # 1: " "%d\n", numbers[0]);
    printf("Elemento # 2: " "%d\n", numbers[1]);
    printf("Elemento # 3: " "%d\n", numbers[2]);
    printf("Elemento # 4: " "%d\n", numbers[3]);
    printf("Elemento # 5: " "%d\n", numbers[4]);

    printf("Suma\n");

    int suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];

    printf("El resultado de la suma es: " "%d\n", suma);


    return 0;
}
