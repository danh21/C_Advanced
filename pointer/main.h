#include <stdio.h>

// array-to-pointer decay: when an array is passed to a function, it decays to a pointer to its first element.
// = void sizeOfArr(int *a)
void sizeOfArr(int a[]) {   // a is treated as a pointer
    printf("Size of array passed as param func: %zu\n", sizeof(a));
}