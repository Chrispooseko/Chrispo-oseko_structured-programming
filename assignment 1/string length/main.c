#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    int length=0;
    printf("Please enter your name ");
    scanf("%s",&name);
    printf("Hello %s\n",name);
    while(name[length])length++;
    printf("name length %i",length);








    return 0;
}
