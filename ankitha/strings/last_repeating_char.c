// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
   char str[]="hello world";
   int len = strlen(str);
   int i,j;
   for(i=len-1;i>=0;i--)
   {
       for(j=i+1;j<len;j++)
       {
           if(i!=j && str[i] == str[j])
           {
               break;
           }
       }
       if(j==len)
       {
           printf("%c\n",str[i]);
           break;
       }
   }
}
