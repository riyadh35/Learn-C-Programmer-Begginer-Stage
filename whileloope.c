// synax

/*
    while (testExpression) {
  // the body of the loop 
    }
*/

#include <stdio.h>

int main(){

    // int i = 1;

    // while (i <= 5){
    //     printf("%d\n", i);
    //     i++;
    // }

    // int i = 0; 

    // while(i <=10){
    //     printf("%d\n", i);
    //     i++;
    // }

    int number;

    printf("enter the number: ");
    scanf("%d", &number);
    
    int count = 1;

    while (count <= 10)
    {
        int product = number * count;
        printf("%d\n",product);
        count = count +1;
    }

    return 0;
    

    return 0;
}