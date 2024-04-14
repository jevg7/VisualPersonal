#include <stdio.h>

int main(void)
{
    float numbers[10]; 

    numbers[0] = 3.57;
    numbers[1] = 5.78;
    numbers[2] = 4.25;
    numbers[3] = 6.13;
    numbers[4] = 1.92;
    numbers[5] = 2.81;
    numbers[6] = 7.61;
    numbers[7] = 8.46;
    numbers[8] = 9.07;
    numbers[9] = 4.69;

    printf("Elemento #1: %.2f\n", numbers[0]);
    printf("Elemento #2: %.2f\n", numbers[1]);
    printf("Elemento #3: %.2f\n", numbers[2]);
    printf("Elemento #4: %.2f\n", numbers[3]);
    printf("Elemento #5: %.2f\n", numbers[4]);
    printf("Elemento #6: %.2f\n", numbers[5]);
    printf("Elemento #7: %.2f\n", numbers[6]);
    printf("Elemento #8: %.2f\n", numbers[7]);
    printf("Elemento #9: %.2f\n", numbers[8]);
    printf("Elemento #10: %.2f\n", numbers[9]);

    printf("Suma\n");

    float suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] +
                 numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];

    printf("El resultado de la suma es: %.2f\n", suma);

    return 0;
}
