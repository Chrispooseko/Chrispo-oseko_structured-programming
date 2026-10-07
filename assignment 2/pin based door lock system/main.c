#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char pin[]="2456";
   char entered_pin[20];
   int choice;
   printf("please enter pin");
   scanf( "%s",&entered_pin);
   int length=strlen(entered_pin);
   if (strcmp(entered_pin, pin)==0){
   printf("DEVICE MENU\n");
   printf("1. Open door\n");
   printf("2. Change username\n");
   printf("3. Change pin\n");
   printf("4. exit\n");
   scanf("%d",&choice);
   switch(choice){
   case 1:
       printf("access granted\n");
       break;
   case 2:
       printf("feature unavailable\n");
       break;
   case 3:
       printf("feature unavailable\n");
       break;
   case 4:
       printf("existing system\n");
       break;
   default:
       printf("invalid option!\n");
       printf("please try again\n");
       break;
   }
   }
   else if(length<4){
    printf("pin too short\n");
    }
   else if(length>4){
    printf("pin too long");
    }
   else{
    printf("invalid pin");
   }
    return 0;

}


