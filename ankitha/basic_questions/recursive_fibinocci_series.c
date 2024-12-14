#include <stdio.h>

int fibinocci(int n)
{
    if(n ==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fibinocci(n-1)+fibinocci(n-2);
}

int main() {
   int range =20;
   int i;
   for(i=2;i<range;i++)
   {
       printf("%d\n",fibinocci(i));
   }
}
