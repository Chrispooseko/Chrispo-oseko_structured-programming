#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   double sum, subtraction, multiplication, division;
   char operation;
   printf("please enter two numbers");
   scanf("%i %i",&a, &b);
   printf("please enter operation(+, -, *, /)\n");
   scanf(" %c",&operation);
   if(operation=='+'){
    sum=a+b;
    printf("sum=%lf",sum);
   }
   else if(operation=='-'){
    subtraction=a-b;
    printf("subtraction=%lf",subtraction);
   }
   else if(operation=='*'){
    multiplication=a*b;
    printf("multiplication=%lf",multiplication);
   }
   else if(operation=='/'){
    division=a/b;
    printf("division=%lf",division);
   }
   else{
    printf("error");
   }

    return 0;
}
