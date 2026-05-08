#include <stdio.h>

int main(void)
{
    int ce;
    printf("enter Celcius:");
    scanf("%d", &ce);
    // convert
    int fa1 = (ce*1.8)+32;
    printf("%d°C = %d°F \n",ce, fa1);
    // -40 fahrenheit= -40 celcius
    if(ce < 0){
        printf("❄️ Freezing weather \n");
    }
    else if(ce < 10 ) {
        printf("🥶 Very cold weather \n");
    }
    else if(ce < 20 ) {
        printf("🧥 Chilly weather \n");
    }
    else if(ce < 30 ) {
        printf("🖼️ Normal weather \n");
    }
    else if(ce < 40 ) {
        printf("☀️ Hot weather \n");
    }
    else {
        printf("🔥 Very hot weather \n");
    }
}
