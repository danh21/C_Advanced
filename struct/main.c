// C program to illustrate size of struct
#include <stdio.h>
#include "test_struct.h"

int main()
{
    printf("Size of struct: %ld\n", sizeof(struct A_pack));

    return 0;
}