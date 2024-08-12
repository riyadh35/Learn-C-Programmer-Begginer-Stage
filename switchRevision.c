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
        case 2:
            printf("This is Monday");
            break;
        case 3:
            printf("This is Tuesday");
            break;
        case 4:
            printf("This is Wednesday");
            break;
        case 5:
            printf("This is Thursday");
            break;
        case 6:
            printf("This is Friday");
            break;
        case 7:
            printf("This is Saturday");
            break;
      
      default:
        printf("Error ! You enter out of 7 or bellow of 0");
      }

    return 0;
}