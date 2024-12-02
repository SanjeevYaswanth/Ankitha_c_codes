// Online C compiler to run C program online
#include <stdio.h>

int rotate_elements(int *arr,int size,int pos)
{
    int temp[pos];
    int i;
    for(i=0;i<pos;i++)
    {
        temp[i]=arr[i];
    }
    
    for(i=pos;i<size;i++)
    {
        arr[i -pos] = arr[i];
    }
    
    for(i=0;i<pos;i++)
    {
        arr[size-pos+i] = temp[i];
    }
    
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    
}


int main() {
   int arr[]={1,2,3,4,5,6,7,8};
   int size = sizeof(arr)/sizeof(arr[0]);
   int pos;
   printf("Enter the position: ");
   scanf("%d",&pos);
   if(pos<0||pos>=size)
   {
   	printf("Invalid position\n");
   }
   rotate_elements(arr,size,pos);  
}
