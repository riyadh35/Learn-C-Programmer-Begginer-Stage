#include <stdio.h>

    // void greet(){
    //     printf("Good Morning\n");
    // }

    // int main(){
    //     greet();
    //     greet();
    //     greet();
    //     return 0;
    // }
    /*------------------------------- Calculate Square without return type on C User defined function ---------------------------------------*/
    // void calculateSquare(int number){
    //     int square = number * number;
    //     printf("Square of %d is %d\n", number, square);
    // }

    // int main(){
    //     calculateSquare(5);
    //     return 0;
    // }

    /*-------------------------------- Sum of Two Argument in C Programme User Defined Function without Return type --------------------------------------------*/
    // void addNumbers(int number1, int number2){
    //      int sum = number1 + number2;
    //      printf("Sum of %d and %d is %d\n", number1, number2, sum);
    // }

    // int main(){
    //     addNumbers(3,4);
    //     return 0;
    // }

    /*--------------------------- Return Type -----------------------------------------*/
    // when we declare a Return Type Function we don't use Void , We use int() ********************* 
     
    // int addNumbers (int number1, int number2){
    //     int sum = number1 + number2;
    //     return sum;
    // }

    // int main(){
    //     int result = addNumbers(5,6);
    //     printf("Result = %d", result);


    //     return 0;
    // }
    /*------------------------------------------ Return Type End ---------------------------------------------*/

    /* --------------------------------------- Function Prototype in C ---------------------------------------------*/



    int addNumbers(int number1, int number2);

    int main(){
        int result = addNumbers(7,8);
        printf("Result = %d\n", result);
        return 0;

     
    }
    int addNumbers(int number1, int number2){
        int sum = number1 + number2;
        return sum;
           // Nothing will print after return type

        printf("After return type.");
    }

    /* ----------------------------------------Function Prototype end ----------------------------------------------*/

    // int addNumbers( int a, int b);         // function prototyep

    // int main(){

    //     int n1,n2,sum;

    //     printf("Enters two Numbers: ");
    //     scanf("%d %d", &n1, &n2);

    //     sum = addNumbers(n1, n2);              // function call
    //     printf("sum = %d", sum);
    //     return 0;
    
    
    // }

    // int addNumbers(int a, int b){            // function definition
    //     int result;
    //     result = a + b;
    //     return result;                      //return statement
    // }
