#include <stdio.h>
#include "_number.h"

int main()
{
    printf("%s", isArmstrong(153) ? "153 is an Armstrong number.\n" : "153 is not an Armstrong number.\n");
    printf("%s", isArmstrong(154) ? "154 is an Armstrong number.\n" : "154 is not an Armstrong number.\n");

    return 0;
}