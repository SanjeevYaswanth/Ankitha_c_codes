// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char str[]="anki";
   int count=0;
   int i;
   for(i=0;str[i]!='\0';i++)
   {
       count++;
       printf("%d%c",count,str[i]);
   }
}
