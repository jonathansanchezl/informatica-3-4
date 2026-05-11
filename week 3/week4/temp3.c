#include <stdio.h>


void CtoF(void);
void FtoC(void);

void CtoF(void){
    int ce;
    printf("enter Celcius:");
    scanf("%d", &ce);
    // convert
    int fa1 = (ce*1.8)+32;
    printf("%d°C = %d°F \n",ce, fa1);
}

void FtoC(void){
int fa;
    printf("enter Fahrenheit:");
    scanf("%d", &fa);
    // convert
    int ce1 = (fa-32)/1.8;
    printf("%d°F = %d°C \n",fa, ce1);

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






