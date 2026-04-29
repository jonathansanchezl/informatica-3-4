#include <stdio.h>

int main(void)
{
    char item[50];

printf("type the name of the purchased item:");
scanf("%s", &item);

float price;

    printf("type the price of that item:");
    scanf("%f", &price);

int quantity;

printf("type the quantity bought:");
scanf("%d", &quantity);

float total = price*quantity;

printf("**********************************\n");
printf("Oxxo Grocery Store\n");
printf("**********************************\n");
printf("Item\tQuantity\tPrice\n");
printf("%s \t %d \t        $%.2f \n", item, price, quantity);
printf("---------------------------------- \n");
printf("Total \t $%.2f \n", total);
printf("---------------------------------- \n");
printf("Thank you for your purchase! \n");


}
