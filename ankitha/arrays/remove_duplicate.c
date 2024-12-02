#include <stdio.h>


void rem_dup(int *arr, int size)
{
	int i,j,k;
	for(i=0;i<size;i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				for(k=j; k < size -1 ;k++)
				{
					arr[k] = arr[k+1];
				}
				size --;
				j--;
			}	
		}
	}

	for(i=0; i<size ;i++)
	{
		printf("%d\n",arr[i]);
	}
}


void main()
{
	int arr[10] = {1,2,1,2,1,3,4,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	rem_dup(arr,size);
}
