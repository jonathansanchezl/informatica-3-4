#include <stdio.h>


void CtoF(void);
void FtoC(void);

void CtoF(void){
    float ce;
    printf("enter Celcius:");
    scanf("%f", &ce);
    // convert
    float fa1 = (ce*1.8)+32;
    printf("%.2f°C = %.2f°F \n",ce, fa1);
}

void FtoC(void){
float fa;
    printf("enter Fahrenheit:");
    scanf("%f", &fa);
    // convert
    float ce1 = (fa-32)/1.8;
    printf("%.2f°F = %.2f°C \n",fa, ce1);

}

int main(void)
{
    int answer;
printf("press 1 to convert from Celcius to farentheit, press 2 to convert from farentheit to celcius \n");
scanf("%d", &answer);
if(answer == 1){
        CtoF();
    }
else if(answer == 2 ) {
        FtoC();
    }
}






