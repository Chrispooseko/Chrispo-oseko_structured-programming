#include <stdio.h>
#include <stdlib.h>

int main()
{
    char registration[30];
    char name[30];
    int marks;
    printf("please state your name\n");
    scanf("%s",&name);
    printf("enter your registration number\n");
    scanf("%s",&registration);
    printf("enter your marks\n");
    scanf("%i",&marks);
    if(marks>=70){
        printf("===STUDENT INFORMATION===\n");
        printf("name %s\n",name);
        printf("registration %s\n",registration);
        printf("marks %i\n",marks);
        printf("grade A\n");
    }
    else if(marks>=60){
        printf("===STUDENT INFORMATION===\n");
        printf("name %s\n",name);
        printf("registration %s\n",registration);
        printf("marks %i\n",marks);
        printf("grade B\n");
    }
    else if(marks>=50){
        printf("===STUDENT INFORMATION===\n");
        printf("name %s\n",name);
        printf("registration %s\n",registration);
        printf("marks %i\n",marks);
        printf("grade C\n");
    }
    else if(marks>=40){
         printf("===STUDENT INFORMATION===\n");
        printf("name %s\n",name);
        printf("registration %s\n",registration);
        printf("marks %i\n",marks);
        printf("grade D\n");
    }
    else {
        printf("===STUDENT INFORMATION===\n");
        printf("name %s\n",name);
        printf("registration %s\n",registration);
        printf("marks %i\n",marks);
        printf("grade E\n");
    }
    switch(marks>=40){
    case 1:
        printf("PASSED\n");
        break;
    case 0:
        printf("FAILED\n");
        break;
    }
    return 0;

}
