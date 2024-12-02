#include <stdio.h>

int reverse_array(int *array,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d\n",array[i]);
    }
}

void main()
{
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int (*fun_ptr)(int *,int);
    fun_ptr = reverse_array;
    fun_ptr(arr,size);
}
