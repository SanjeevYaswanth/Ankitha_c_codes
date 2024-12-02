// Online C compiler to run C program online
#include <stdio.h>

int main() {
    unsigned int x = 0x12345678;
    int rev=0;
    int i;
    for(i=0;i<=31;i++)
    {
        rev =rev <<1;
        rev = rev | (x &1);
        x = x >>1;
    }
    printf("%x",rev);
}
