#include <stdio.h>
int main(void)
{
//variables first snak soda;
float pricesoda=19.99;
int quantitysoda = 10;
char codesoda = 's'

// variables snak chips;
;float pricechips=24.99;
int quantitychips = 15;
char codechips = 'c'

// variables snak water;
;float pricewater=4.99;
int quantitywater = 6;
char codewater = 'w';

printf("Vending Machine Stock \n");
printf("--------------------- \n");
printf("Item name: Chips \n");
printf("price: $%.2f \n", pricechips);
printf("Quantity available: %d \n",quantitychips);
printf("Selection code: %c \n",codechips);

printf("\n");

printf("Item name: Soda \n");
printf("price: $%.2f \n", pricesoda);
printf("Quantity available: %d \n",quantitysoda);
printf("Selection code: %c \n",codesoda);

printf("\n");

printf("Item name: Water \n");
printf("price: $%.2f \n", pricewater);
printf("Quantity available: %d \n",quantitywater);
printf("Selection code: %c \n",codewater);
}
