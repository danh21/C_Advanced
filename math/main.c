#include <stdio.h>
#include "_number.h"

int main()
{
    printf("%s", isArmstrong(153) ? "153 is an Armstrong number.\n" : "153 is not an Armstrong number.\n");
    printf("%s", isArmstrong(154) ? "154 is an Armstrong number.\n" : "154 is not an Armstrong number.\n");

    printf("%s", isPowerOfTwo(16) ? "16 is a power of two.\n" : "16 is not a power of two.\n");
    printf("%s", isPowerOfTwo(15) ? "15 is a power of two.\n" : "15 is not a power of two.\n");
    printf("%s", isPowerOfTwo(1) ? "1 is a power of two.\n" : "1 is not a power of two.\n");

    return 0;
}