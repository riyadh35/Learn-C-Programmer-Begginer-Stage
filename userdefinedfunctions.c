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

    void calculateSquare(int number){
        int square = number * number;
        printf("Square of %d is %d\n", number, square);
    }

    int main(){
        calculateSquare(5);
        return 0;
    }


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
