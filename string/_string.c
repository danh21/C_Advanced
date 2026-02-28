#include "_string.h"

void reverse(char *s)
{
    int start, end;
    start = 0;
    end = strlen(s) - 1;

    while (start < end)
    {
        s[start] ^= s[end];
        s[end] ^= s[start];
        s[start] ^= s[end];
        start++;
        end--;
    }
}

char* _strcpy(char *dest, const char *src)
{
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0'; // Null-terminate the destination string

    return dest;
}