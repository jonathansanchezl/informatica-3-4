#include <stdio.h>

int main(void)
{
    int fa;
    printf("enter Fahrenheit:");
    scanf("%d", &fa);
    // convert
    int ce1 = (fa-32)/1.8;
    printf("%d°F = %d°C \n",fa, ce1);
    // -40 fahrenheit= -40 celcius
}
