#include <stdio.h>

#define RESET(x, bit1, bit2) ((x) |= (1 << (bit1)), (x) &= ~(1 << (bit2)))

int main() {
    int x = 0x55;  
    int b1 =7 , b2 = 6;  
    RESET(x, b1, b2);
    printf("%x\n", x);  
    return 0;
}
