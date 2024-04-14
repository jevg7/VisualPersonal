#include <stdio.h>

int main(void)
{
    float numbers[6];

    numbers[0]= 2.15;
    numbers[1]= 434.435;
    numbers[2]= 544.214;
    numbers[3]= 65.53;
    numbers[4]= 4333.124;
    numbers[5]= 235.46652;

    printf("Elemento # 1: " "%.2f\n", numbers[0]);
    printf("Elemento # 2: " "%.2f\n", numbers[1]);
    printf("Elemento # 3: " "%.2f\n", numbers[2]);
    printf("Elemento # 4: " "%.2f\n", numbers[3]);
    printf("Elemento # 5: " "%.2f\n", numbers[4]);
    printf("Elemento # 6: " "%.2f\n", numbers[5]);

    return 0;
}
