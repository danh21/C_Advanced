#include "_number.h"

// Function to check if a number is an Armstrong number. An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
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

// Function to check if a number is a power of two
bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0; // A number that is a power of two has exactly one bit set in its binary representation
}