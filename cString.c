//


/* 
Read String from the User */

// In c programming we can use the scanf() funciton to read the string..


#include <stdio.h>

int main(){

    char name[20];
    printf("Enter a name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}