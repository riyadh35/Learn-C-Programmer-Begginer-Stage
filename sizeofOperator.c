#include <stdio.h>

int main(){

    int id;
    char r;
    float salary;
    double price;
    short a;
    long b;
    long long c;
    long double d;


    printf("Size of int= %d bytes\n", sizeof(id));
    printf("size of char = %d bytes\n", sizeof(r));
    printf("size of float = %d bytes\n", sizeof(salary));
    printf("Size of double = %d bytes\n", sizeof(price));
    printf("size of short= %d bytes\n", sizeof(a));
    printf("size of long =%d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n",sizeof(c));
    printf("size of long double = %d bytes\n", sizeof(d));
    return 0;
}


// Void is an incomplete type. It means "Nothing" or "NO Type". You can think of void as Absent
// For example, if a function is not returning anything, its return type should be void.

// Note that, you cannot create variables of void type.