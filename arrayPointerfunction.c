
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

#include <stdio.h>

int main(){
    int x[4];
    int i;
    for(i = 0; i <4 ; ++i){
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of Array x: %p", x);

    return 0;
}