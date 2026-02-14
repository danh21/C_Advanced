#include "main.h"

int main() {
    int a[5] = {1,2,3,4,5};

    /* pointer to int */
    // printf("Pointer to int:\n");
    // int *p = a;

    // printf("Address of a[0]: %p\n", (void*)a);          // x
    // printf("Address of a: %p\n", (void*)&a);            // x
    // printf("Address of a+1: %p\n", (void*)(a + 1));     // x + 4(sizeof(int))
    // printf("Address of &a+1: %p\n", (void*)(&a + 1));   // x + 20(sizeof(a)) = x + 5 * 4

    // printf("sizeof a[0]: %d\n", sizeof(a[0]));  //4
    // printf("sizeof a: %d\n", sizeof(a));        //20
    // printf("sizeof p*: %d\n", sizeof(p));       //8

    // sizeOfArr(a);  //8 - treated as pointer

    // printf("get value, pointer point to next element: %d\n", *p++);
    // printf("increment value, pointer point to same element: %d\n", ++*p); 
    // printf("pointer point to next element, get value: %d\n", *++p); 


    
    /* pointer to array */
    // printf("\nPointer to array:\n");
    // int (*pArr)[] = &a;  //pointer to array of 5 integers
    // printf("Address of pArr: %p\n", (void*)pArr);
    // printf("pArr[2] = %d\n", (*pArr)[2]);  //3



    /* pointer to 2D array */
    int b[2][2] = {{5,6,},{7,8}};

    printf("\nb[0][0]:\n");
    printf("Address of b: %p\n", (void*)b);         // x
    printf("Address of b[0]: %p\n", (void*)b[0]);   // x      
    printf("Address of *b: %p\n", (void*)*b);       // x
    printf("b[0][0] = %d\n", **b);   //5

    printf("\nb[0][1]:\n");
    printf("Address of *b+1: %p\n", (void*)(*b + 1));       // x + 4(sizeof(int))
    printf("Address of b[0]+1: %p\n", (void*)(b[0] + 1));   // x + 4(sizeof(int))
    printf("*(*b + 1) = %d\n", *(*b + 1));      //6
    printf("*(b[0] + 1) = %d\n", *(b[0] + 1));  //6

    printf("\nb[1][0]:\n");
    printf("Address of b+1: %p\n", (void*)(b + 1));         // x + 8(sizeof(b[0]))
    printf("Address of b[1]: %p\n", (void*)b[1]);           // x + 8(sizeof(b[0]))
    printf("Address of *(b+1): %p\n", (void*)*(b + 1));     // x + 8(sizeof(b[0]))
    printf("*(*(b + 1)) = %d\n", *(*(b + 1)));  //7
    printf("**(b + 1) = %d\n", **(b + 1));      //7

    return 0;
}