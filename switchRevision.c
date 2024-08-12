#include <stdio.h>

int main(){

      // Write a C Programe to print day of week name using switch case 

      int a;

      printf("Enter week day number: ");
      scanf("%d", &a);

      switch (a)
      {
      case 1:
        printf("This is Sunday");
        break;
      
      default:
        printf("Error ! You enter out of 7 or bellow of 0");
      }

    return 0;
}