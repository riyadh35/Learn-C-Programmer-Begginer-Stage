#include <stdio.h>

int main(){

    int a = 5,c;

    c=a;
    printf("There are c = %d \n",c);

    c = a+c;
    printf("There are c =%d\n", c);

    c=a-c;
    printf("There are c = %d\n", c);


    c=a*c;
    printf("c is= %d\n",c);

    c= a/c;
    printf("c is = %d\n", c);


    c= a%c;
    printf("in recreament c is =%d\n", c);

    
    return 0;
}