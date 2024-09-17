// #include <stdio.h>

// int main(){
//     int n, i;
//     float num[100], sum = 0.0, avg;

//     printf("Enters the numbers of elements: ");
//     scanf("%d", &n);

//     while(n>100 || n < 1) {
//         printf("Error! number should in range of (1 to 100). \n");
//         printf("Enter the number again: ");
//         scanf("%d", &n);
//     }

//     for(i = 0; i < n; ++i){
//         printf("%d. Enter number: ", i + 1);
//         scanf("%f", &num[i]);
//         sum += num[i];
//     }

//     avg = sum / n;
//     printf("Average = %.2f", avg);
//     return 0;

// }


// #include <stdio.h>

// int main(){

//     int n , i;
//     float num[100], sum = 0.0, avg;

//     printf("Enter the elements of numbers: ");
//     scanf("%d", &n);


//     while (n > 100 || n < 1)
//     {
//       printf("Error ! number should in range of (1 to 100). \n");
//       printf("Enter the numbers again : ");
//       scanf("%d", &n);
//     }

//     for(i = 0 ; i < n; ++i ){
//         printf("%d. Enter the number: ", i + 1 );
//         scanf("%f. Average numbers of ", &num[i]);
//         sum += num[i];
//     }
    

//     avg = sum /n ;
//     printf("%f. the average %.2f :", avg);
//     return 0;
// }










/* -----------------------C Program to Find Largest Element in an Array----------------------------------   */



#include <stdio.h>

int main(){
    int n;
    double arr[100];

    printf("Enter the elements numbers (1 to 100): ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
    printf("Enter number %d:", i + 1);
    scanf("%lf", &arr[i]);
    }


    // storing the largest number to arr[0]

    for(int i = 1; i < n; ++i){
    if(arr[0] < arr[i]){
      arr[0] = arr[i];
    }
  }


    printf("Largest number is = %.2lf", arr[0]);

    return 0;
}