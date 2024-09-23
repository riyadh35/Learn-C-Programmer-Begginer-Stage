//


/* 
Read String from the User */

// In c programming we can use the scanf() funciton to read the string..


// #include <stdio.h>

// int main(){

//     char name[20];
//     printf("Enter a name: ");
//     scanf("%s", name);
//     printf("Your name is %s.", name);
//     return 0;
// }

/* How to read a line of text?
You can use the fgets() function to read a line of string. And, you can use puts() to display the string */


/* Example 2: fgets() and puts() */

// #include <stdio.h>

// int main(){
//     char name[30];
//     printf("Enter name: ");
//     fgets(name, sizeof(name), stdin);  // read string
//     printf("Name: ");

//     puts(name);    // display string
//     return 0;
// }



/* Passing Strings to Functions
Strings can be passed to a function in a similar way as arrays. Learn more about passing arrays to a function. */


/* Example 3: Passing string to a Function */

// #include <stdio.h>


// void displayString(char str[]);

// int main(){
//     char str[50];
//     printf("Enter string: ");
//     fgets(str, sizeof(str), stdin);
//     displayString(str);         // Passing string to a function.
//     return 0;
// }

// void displayString(char str[]){
//     printf("String Output: ");
//     puts(str);
// }



/* Strings and Pointers
Similar like arrays, string names are "decayed" to pointers. Hence, you can use pointers to manipulate elements of the string. We recommended you to check C Arrays and Pointers before you check this example.

 */



/* Example 4: Strings and Pointers */


#include <stdio.h>

int main(void){
    char name[] = "Harry Potter";

    printf("%c", *name);        // Output: H
    printf("%c", *(name+1));    // Output: a
    printf("%c", *(name+7));    // Output : o

    char *namePtr;
    
    printf("%c", *namePtr);     // Output: H
    printf("%c", *(namePtr+1)); //Output: a
    printf("%c", *(namePtr + 7)); //Output: o
}