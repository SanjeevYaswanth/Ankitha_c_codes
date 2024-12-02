#include <stdio.h>

void rotate_element(int *array, int n, int rotate_point)
{
	int temp[rotate_point];
	int i;
	for(i=0; i<rotate_point; i++)
	{
		temp[i] = array[i];	
	}

	for(i=0; i<n-rotate_point; i++)
	{
		array[i] = array[i + n];
	}

	for(i=0; i<rotate_point; i++)
	{
		temp[n - rotate_point + 1] = temp[i];
	}

	for(i=0; i<n; i++)
	{
		printf("%d\n",temp[i]);
	}
}

void main()
{
	int arr[5]= {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int rotate_from;
	printf("Enter the input to rotate: ");
	scanf("%d",&rotate_from);
	rotate_element(arr,size,rotate_from);
}
