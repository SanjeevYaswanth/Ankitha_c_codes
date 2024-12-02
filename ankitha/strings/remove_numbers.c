#include <stdio.h>
#include <string.h>

int main() {
    char str[]="ankitha123";
    int len=strlen(str);
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("%s\n",str);
}
