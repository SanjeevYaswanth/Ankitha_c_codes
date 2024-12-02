#include <stdio.h>

void move_zeros_end(int arr[], int size)
{
	int i,j;
	int count = {0};
	for(i=0;i<size;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++] = arr[i];
		
		}
	}
	while(count < size)
	{
		arr[count++] = 0;
	}

	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}


}

void main()
{
	int arr[]={1,0,2,3,0,4,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	move_zeros_end(arr,size);
}
