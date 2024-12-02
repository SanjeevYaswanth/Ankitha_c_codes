#include <stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,0};
    int s = sizeof(arr)/sizeof(arr[0]);
    int small,sec_small;
    
    if(arr[0] < arr[1])
    {
        small = arr[0];
        sec_small = arr[1];
    }
    else
    {
        small = arr[1];
        sec_small = arr[0];
    }
    
    int i;
    for(i=2;i<s;i++)
    {
        if(arr[i]  < small)
        {
            sec_small = small;
            small =arr[i];
        }
        else if(arr[i] < sec_small)
        {
            sec_small = arr[i];
        }
    }
    printf("%d sec small\n",sec_small);
}
