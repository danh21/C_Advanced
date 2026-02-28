#include "_number.h"

bool isArmstrong(int n)
{
    int sum = 0;
    int digits = 0;

    int temp = n;
    while (temp)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp)
    {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == n;
}