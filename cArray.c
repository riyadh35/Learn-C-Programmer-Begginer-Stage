// An Array is a variable that can store multiple values.

/* Few keynotes:
Arrays have 0 as the first index, not 1. In this example, mark[0] is the first element.
If the size of an array is n, to access the last element, the n-1 index is used. In this example, mark[4]
Suppose the starting address of mark[0] is 2120d. Then, the address of the mark[1] will be 2124d. Similarly, the address of mark[2] will be 2128d and so on.
This is because the size of a float is 4 bytes. */


/* Change Value of Array elements  */

// int mark[5] = {19, 10, 8, 17, 9};

// make the value of the third element to -1

// mark[2] = {-1};

// make the value of the fifth element to 0

// mark[4] = {0};


// Input and OutPut Array Elements 

// take input and store it in the 3rd Element

// scanf("%d", &mark[2]);

/* take input and store it in the ith element  */
// scanf("%d", &mark[i-1]);

// Here's how you can print an individual element of an array.

// print the first element of the array
/* printf("%d", mark[0]); */

// print the third element of the array
/* printf("%d", mark[2]);*/


// print ith element of the array
/* printf("%d", mark[i-1]); */



// Example : 1 for Array input and Output 


// Program to take 5 values from the user and store them in an array 
// Print the elements stored in the Array




#include <stdio.h>

// we can assign value by particular index

int main(){

    int age[5]= {2,4,5};


     // age[0] = 23;
    // age[1] = 4;
    // age[2] = 5;
    // age[3] = 56;
    // age[4] = 299;

     /* Loop and array */

     /* Get Array From Users */
    for(int i = 0 ; i < 5 ; ++i){
        printf("Enter 5 input values: ");
        scanf("%d", &age[i]);
    }
   
    // /* Get Input Value From User */
    // printf("Enter 5 input values: ");
    // scanf("%d", &age[0]);
    // scanf("%d", &age[1]);
    // scanf("%d", &age[2]);
    // scanf("%d", &age[3]);
    // scanf("%d", &age[4]);



    /* Print Array from that get from users */
    for(int i = 0 ; i <5 ; ++i){
    printf("%d " , age[i]);
    }


    
    return 0;
}

// --------------------------- Loop & Array ------------------

/* 
    int main(){
    int values[5];
    printf("Enter 5 intergers: ");

    // Taking input and storing it in an array

    for (int i = 0 ; i <5 ; ++i){

        scanf("%d", &values[i]); 
    }

    printf("Displaying intergers: ");

    // printing elements of an array

    for(int i = 0; i < 5; ++i){
        printf("%d\n", values[i]);
    }

    return 0;
} */


// Example 2: Calculate Average

// Program to find the average of n numbers using arrays
/* int main(){
    int marks[10] , i, n, sum = 0 ;
    double average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i= 0 ; i < n; ++i){
        printf("Enter number%d: ", i+1);
        scanf("%d", &marks[i]);

        // Adding integers entered by the user to the sum variable 

        sum += marks[i];
    }

    // explicitly convert sum to double 
    // then calculate average

    average = (double) sum/n;
    printf("Average = %2lf", average);

    return 0;
} */




















/* 


    Task : Create a program that computes the average marks of a student. 
        
        *Create an array that stores the marks of 5 subjects
        *Compute the total marks by adding all the marks
        *Divide the total marks by total number of subjects
        *Print the average marks

 */