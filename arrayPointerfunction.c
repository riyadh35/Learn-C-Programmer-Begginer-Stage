
// Array & Pointer pass to function 

// #include <stdio.h>

// int main()

    // int x[5] = {1,2,3,4,5};

    // int *p;
    // p = &x[0];
    // printf("%d ", x[0]);
    // printf("%d ", *p);
    // printf("%d ", *p++);
    // printf("%d ", ++*p);
    // printf("%d ", *(p+4));
    // p = &x[2];
    // printf("%d ", *(p-1));

    // return 0;


/*     Array and Pointer Example  */
/* 

#include <stdio.h>
    int disp(int *p){
        printf("%d", *p);
        printf("%d", *(p+3));

    }

    int main()
    {
        int a[5] = {1,2,3,4,5};
        {
            disp(&a);
        }

        return 0;
    }
 */


// Let's write a program to print addresses of array elements 
/* 
#include <stdio.h>

int main(){
   
    int x[4];
    int i;

    for(i = 0; i <4; ++i){
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of Array x: %p", x);
    return 0;
} */

// Example 1: Pointers and Arrays
/* 
#include <stdio.h>


int main(){
    int i,x[6], sum= 0 ;

    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; ++i){
        // Equivalent to scaf("%d", &x[i]);

        scanf("%d", &x[i]);

        // Equivalent to sum += x[i]
        sum += x[i];
    }

    printf(" sum = %d", sum);

    return 0;
} */



// Example 3: Pass Two-Dimensional arrays

#include <stdio.h>

void displayNumbers(int num[2][2]);

int main(){
    int num[2][2];
    printf("Enter 4 numbers: \n");
    for(int i = 0 ; i < 2; ++i){
        for(int j = 0; j < 2; ++i){
            scanf("%d", &num[i][j]);
        }
    }

    // Pass multi-dimensional array to a function

    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[2][2]){
    printf("Displaying : \n");

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            printf("%d\n", num[i][j]);
        }
    }
}