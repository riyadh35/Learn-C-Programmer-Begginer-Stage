
// Pass arrays to a function in C 


/* Example 1: Pass Individual Arrays Elements  */

#include <stdio.h>

void display(int age1, int age2)
{
    printf("%d\n", age1);
printf("%d\n", age2);
}

int main(){
    int ageArray[] = {2, 4, 5, 6};

    // Pass second and third elements to display()
    display(ageArray[2], ageArray[3]);

    return 0;


}