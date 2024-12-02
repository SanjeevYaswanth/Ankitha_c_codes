// Online C compiler to run C program online
#include <stdio.h>

int sum(int a,int b)
{
    int c = a+b;
    printf("%d\n",c);
    return c;
}

int main() {
    int a=1,b=2;
    int (*fun_ptr)(int ,int);
    fun_ptr = sum;
    fun_ptr(a,b);
}
