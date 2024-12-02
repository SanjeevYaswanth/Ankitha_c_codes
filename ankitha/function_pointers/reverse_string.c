// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void reverse_string(char *str,int len)
{
    int i,temp;
    for(i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[len -i -1];
        str[len-i-1] = temp;
    }
    printf("%s\n",str);
}

int main()
{
    char str[]="ankitha";
    int len = strlen(str);
    void (*fun_ptr)(char *,int);
    fun_ptr = reverse_string;
    fun_ptr(str,len);
}
