/* Calculate the average of Array Elements. */

/* #include <stdio.h>

int main(){
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1){
        printf("Error ! Enter a wrong elements numbers(1 to 100) \n");
        printf("Enter the number again");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("%d.Enter the number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0 ;
} */

#include <stdio.h>

int main(){
    int n , i;
    float num[100], sum = 0.0, avg;

    printf("Enter a element of number : ");
    scanf("%d" , &n);

    while (n > 100 || n < 1)
    {   
        printf("Error the number of element !( 1 - 100)");
        printf("Enter the number again");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("%d. Enter the number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0 ;
    

}