#include <stdio.h>

int main(void)
{
char name[50];
char color[50];
//ask name
    printf("enter a user: \n");
    scanf("%s", &name);
    printf("Hello, %s! \n",name);
// ask color
    printf("what is your favorite color?: \n");
    scanf("%s", &color);
    printf("Your favorite color is %s! \n",color);

}
