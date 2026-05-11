#include <stdio.h>

void add(void);
void sub(void);
void mult(void);
void div(void);

void add(void){
    float addN1;
    float addN2;
    printf("first number:");
    scanf("%f", &addN1);
    printf("second number:");
    scanf("%f", &addN2);
    float R = addN1 + addN2;
    printf("%.2f + %.2f = %.2f \n",addN1, addN2, R);
}

void sub(void){
    float subN1;
    float subN2;
    printf("first number:");
    scanf("%f", &subN1);
    printf("second number:");
    scanf("%f", &subN2);
    float R2 = subN1 - subN2;
    printf("%.2f - %.2f = %.2f \n",subN1, subN2, R2);
}

void mult(void){
    float multN1;
    float multN2;
    printf("first number:");
    scanf("%f", &multN1);
    printf("second number:");
    scanf("%f", &multN2);
    float R3 = multN1 * multN2;
    printf("%.2f * %.2f = %.2f \n",multN1, multN2, R3);
}

void div(void){
    float divN1;
    float divN2;
    printf("first number:");
    scanf("%f", &divN1);
    printf("second number:");
    scanf("%f", &divN2);
    float R4 = divN1 / divN2;
    if(divN2 == 0){
        printf("Cant divide by 0\n");
    }
    else{
    printf("%.2f / %.2f = %.2f \n",divN1, divN2, R4);
    }
}

int main(void)
{
    int answer;
printf("press 1 to add, press 2 to substract, press 3 to multiply, press 4 to divide  \n");
scanf("%d", &answer);
if(answer == 1){
        add();
    }
else if(answer == 2 ) {
        sub();
    }
    else if(answer == 3 ) {
        mult();
    }
    else if(answer == 4 ) {
        div();
    }
    else{
        printf("invalid value \n");
    }
}
