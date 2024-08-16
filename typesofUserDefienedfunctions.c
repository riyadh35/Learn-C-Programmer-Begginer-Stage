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

/* 
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
} */



// Example -3
// ------- Argument Passed But No Return Value;

// Function Declare korle jodi Return type na thake tahole Void diye function call korte hoi;;
/* 

void checkPrimeNumbers(int n);

int main(){
    int n;
    printf("enter a positive integer: ");
    scanf("%d", &n);

    // n is passed to the function 

    checkPrimeNumbers(n);
    
    return 0;
}

// return type is void meaning doesn't return any value


void checkPrimeNumbers(int n){
    int i, flag = 0;


    // 0 and 1 are not prime numbers
    if(n == 0 || n == 1)
        flag = 1;
    

    for( i = 2; i <= n/2; i++){
        if(n%i == 0 ){
            flag = 1; 
            break;
        }
    }

    if(flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}

 */






// Example - 4 

  /*  ------------------- Argument Passed and Returns a Value -----------------*/

  int checkPrimeNumber(int n);

int main(){
    int n, flag;
     
     printf("Enter a positive integer: ");
     scanf("%d", &n);

     // n is passed to the checkPrimeNumber() function
     // the returned value is assigned to the flag variable 


     flag = checkPrimeNumber(n);

     if(flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    
    return 0;
}


// int is returned from the function 

int checkPrimeNumber(int n){

    // 0 and 1 are not prime numbers

    if (n == 0 || n== 1)
        return 1; 
    
    int i;

    for(i = 2; i <= n/2; ++i){
        if(n%i == 0)
            return 1; 
    }

    return 0;
}







