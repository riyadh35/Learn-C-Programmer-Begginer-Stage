
// Pass arrays to a function in C 


/* Example 1: Pass Individual Arrays Elements  */

/* #include <stdio.h>

void display(int age1, int age2){
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main(){
    int ageArrayp[] = {3,5,6,8};

    // pass third and fourth array in display()

    display(ageArrayp[2], ageArrayp[3]);

    return 0;
} */




/* Example 2: Pass Individual Array to Functions */

// Program to calculate the sum of array elements by passing to a function

// #include <stdio.h>

// float calculateSum(float num[]);

// int main(){
//     float result, num[] = {23.4 , 55, 33.6, 3, 40.5, 18};

//     // num array is passed to calculateSum()

//     result = calculateSum(num);
//     printf("Result = %.2lf", result);
//     return 0;     
// }

// float calculateSum(float num[]){
//     float sum = 0.0;
//     for (int i = 0 ; i < 6; ++i){
//         sum += num[i];
//     }
//     return sum;
// }




 /* Example 3: pass two-dimensional arrays */


#include <stdio.h>
 void displayNumbers (int num[2][2]);

 int main(){

    int num[2][2];
    printf("Enter 4 numbers: \n");
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            scanf("%d", &num[i][j]);
        }
    }

    // pass multi-dimensional array to a function 

    displayNumbers(num);

    return 0;
 }

 void displayNumbers(int num[2][2]){
    printf("Displaying : \n ");

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            printf("%d ", num[i][j]);
        }
    }
 }