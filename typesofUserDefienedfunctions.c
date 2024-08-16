// Example 1: No Argument Passed and No  Return Value;


#include <stdio.h>

/* 

void checkPrimeNumber();

int main(){
    checkPrimeNumber();           // argument is not passed
    return 0;
}

 */
// return type is void meaning doesn't return any value;
/* 
void checkPrimeNumber(){
    int n, i, flag = 0; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //0 and 1 are not prime numbers

    if(n==0 || n == 1)
        flag = 1;
    
    for(i =2 ; i <= n/2;  ++i){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("%d is not a prime numbers. ", n);
    else("%d is a prime number.", n);
}
 */


//-----No Argument Passed But Returns a value;


int getInteger();

int main(){
    int n , i , flag = 0;

    // no argument is passed 

    n = getInteger();

    // 0 and 1 are not prime numbers

    if(n == 0 || n == 1){
        flag = 1;
    }
    for(i=2; i<= n/2; ++i){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("%d is not a prime number,", n);
    else
        printf("%d is a prime number.", n);

    return 0;
}


// returns integer entered by the user



int getInteger(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    return n;
}