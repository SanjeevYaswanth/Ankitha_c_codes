#include <stdio.h>

void ascending(int *arr, int start, int end)
{
	int i,j,temp;
	for(i=start;i<end-1;i++)
	{
		for(j=i+1;j<end;j++)
		{
			if(arr[i] > arr[j])
			{
				temp =  arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

void decending(int *arr, int start, int end)
{
	int i,j,temp;
	for(i=start; i<end-1; i++)
	{
		for(j=i+1; j<end; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}



void main()
{
	int arr[10];
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
	}

	ascending(arr,0,size);
	decending(arr,size/2,size);

		for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}

}
