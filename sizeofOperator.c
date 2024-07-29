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