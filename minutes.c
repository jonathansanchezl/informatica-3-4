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

    printf("The movie will last: %d hours and %d minutes \n",duracionPH,duracionPM);
printf("End time: %d:%d \n",FduracionH,FduracionM);
}
