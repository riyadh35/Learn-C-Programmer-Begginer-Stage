

// MultiDimensional Array 

#include <stdio.h>

int main(){

    // Different ways to initialize two-dimensional array 

   /*  int c[2][3] = {{1,2}, {2,3,4}};

    int c[] = {{1,3,0}, {-1,5,9}};
 */
    // You can initialize a three-dimensional array in a similar way to a two-dimensional array. Here's an example,

 /*    int test[2][3][4] = {
        {{2,3,2,4}, {0, -3, 9, 11}, {23, 12,23,2}},
        {{13,4,56,3}, {5,9,3,5}, {3,1,4,9}};
    };
 */
    int arr[2][3] = {{1,3,5}, {2,4,6}};



    // arr[1][2];


    /// change position
/* 
    arr[0][0] = 9;
    arr[1][2] = 5; 

    printf("%d\n",arr[0][0]);
    printf("%d\n",arr[1][2]);
    return 0; */


    //-------- Multidimensional Array and for Loop
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%d  ", arr[i][j]);
        }
    }

}
