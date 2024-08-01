#include <stdio.h>

int main(){
    int score;

    printf("Please enter your exam number: ");
    scanf("%d", &score);

    if(score >= 50){
        printf("Pass", score);
    }
    else{
        printf("Fail", score);
    }

    return 0;
}