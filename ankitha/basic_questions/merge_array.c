#include <stdio.h>
void main()
{
	int arr[8];
	int arr1[4];
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("Enter the elements of first array: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("Enter the elements of second array: ");
		scanf("%d",&arr1[i]);
	}

	for(i=0;i<4;i++)
	{
		arr[i+4] = arr1[i];
	}

	for(i=0;i<8;i++)
	{
		printf("%d\n",arr[i]);
	}
}
