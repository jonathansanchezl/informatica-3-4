#include <stdio.h>

int main(void)
{
    int minutes;
    int duracionM;
    int duracionH;

printf("Movie running time (in minutes):");
scanf("%d", &minutes);

    printf("Start time:");
    scanf("%d:%d", &duracionH, &duracionM);


    int duracionPH = (minutes/60);
    int duracionPM = (minutes%60);

int FduracionH = duracionH + duracionPH;
int FduracionM = duracionM + duracionPM;

printf("The movie will last: %d hours and %02d minutes \n",duracionPH,duracionPM);
if(FduracionM >= 60) {
 int finalM = FduracionM - 60;
 int finalH = FduracionH + 1;
 printf("End time: %d:%02d \n",finalH,finalM);
}
else {

printf("End time: %d:%02d \n",FduracionH,FduracionM);
}
}

