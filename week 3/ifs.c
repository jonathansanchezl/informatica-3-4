#include <stdio.h>
int main(void)
{
    int a = 5; // = means assigment
    int b = 5;
    int c = 10; // we created three variables
printf("%d == %d is %d \n", a, b, a == b);
printf("%d == %d is %d \n", a, c, a == b);
printf("%d != %d is %d \n", a, c, a != b);
// program that identifies negative numbers
int number;
printf("enter a number: ");
scanf("%d", &number);
// if the number above is less than 0, it will run the code inside the curly bracket
if (number < 0) {
    printf("%d is a negative number. \n", number);
} else { // if not, it will run this one
    printf("%d is a positive number. \n", number);
}
}
