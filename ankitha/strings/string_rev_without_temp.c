#include <stdio.h>

char func(char*arr)
{
    if(*arr == 0)
    {
        return 0;
    }
    func(arr+1);
    printf("%c",*arr);
    
}


int main() {
 char arr[10]="Ankitha";
 func(arr);
   
}
