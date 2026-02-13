#include <stdio.h>

void sizeOfArr(int a[]) {   // a is treated as a pointer
    printf("Size of array: %zu\n", sizeof(a));
}