#include <stdio.h>

int main (void)

{
    float amount, price, totalPrice, discount, finalPrice;

    printf("Enter how much products are you buying\n");
    scanf("%f", &amount);

    printf("Enter the price\n");
    scanf("%f", &price);


    totalPrice = amount * price;
    discount = totalPrice * 0.10;
    finalPrice = totalPrice - discount;

    printf("Total price before discount is: %.2f\n", totalPrice);
    printf("Discount of 10 percent: %.2f\n", discount);
    printf("Final price with discount: %.2f\n", finalPrice);

}
