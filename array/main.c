#include <stdio.h>

static const char KEYMAP[256] = {         ///< HID keycode to ASCII mapping
    [30] = '1', [31] = '2', [32] = '3',   ///< Number keys 1-3
    [33] = '4', [34] = '5', [35] = '6',   ///< Number keys 4-6
    [36] = '7', [37] = '8', [38] = '9',   ///< Number keys 7-9
    [39] = '0',                           ///< Number key 0
    [40] = '\0'                           ///< Enter key (end of transmission)
};

int main()
{
    printf("KEYMAP[34] = %c\n", KEYMAP[34]);    //5
    printf("KEYMAP[29] = %c\n", KEYMAP[29]);    //NULL
    printf("KEYMAP[-1] = %c\n", KEYMAP[-1]);    //NULL
    printf("KEYMAP[40] = %c\n", KEYMAP[40]);    //NULL


    
    int a[5] = {
        [0] = 1,
        [3] = 4,
        [4] = 5
    };
    
    int b[3];
    
    int c[3] = {0};
    
    printf("a[0] = %d\n", 0[a]);    //1
    printf("a[2] = %d\n", *(a+2));  //0 (default)
    printf("a[-1] = %d\n", a[-1]);  //garbage value
    
    printf("b[0] = %d\n", *b);      //garbage value
    
    printf("c[0] = %d\n", *c);      //0
    printf("c[2] = %d\n", c[2]);    //0
    printf("c[3] = %d\n", c[3]);    //garbage value

    return 0;
}