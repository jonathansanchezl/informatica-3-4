#include <stdio.h>
int main(void)
{
int width;
int length;
//ask width
    printf("enter the width of your rectangle: \n");
    scanf("%d", &width);
// ask length
    printf("enter the length of your rectangle: \n");
    scanf("%d", &length);
    int widthr = width*length;
    int lengthr = width*2 + length*2;
    //print answer
    printf("Area: %d\n",widthr);
    printf("perimeter: %d\n",lengthr);

}
