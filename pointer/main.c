#include "main.h"

int main() {
    int a[5] = {1,2,3,4,5};
    int *p = a;

    printf("Address of a[0]: %p\n", (void*)p);

    printf("sizeof a[0]: %d\n", sizeof(a[0]));  //4
    printf("sizeof a: %d\n", sizeof(a));        //20
    printf("sizeof p*: %d\n", sizeof(p));       //8

    sizeOfArr(a);  //8 - treated as pointer
}