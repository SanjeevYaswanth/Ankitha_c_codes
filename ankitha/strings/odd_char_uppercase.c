// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[]="ankitha";
    int i;
    for(i=1;str[i]!='\0';i=i+2)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
        {
            str[i] = str[i]-32;
        }
    }
    printf("%s\n",str);
}
