#include <stdio.h>
#include "_string.h"

int main()
{
    char s[] = "hello danh";
    reverse(s);
    // printf("%s\n", s);

    char dest[20];
    _strcpy(dest, s);
    printf("%s\n", dest);
    return 0;
}