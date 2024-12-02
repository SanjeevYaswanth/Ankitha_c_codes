#include <stdio.h>

void reverse_array(int *arr, int n)
{
	int i;
	int temp;
	for(i=0;i<n/2;i++)
	{
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 -i] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("reverse array: %d\n",arr[i]);
	}

}

void main()
{
	int array[5]= {2,3,1,4,5};
	int i;
	int size = sizeof(array)/sizeof(array[0]);
	for(i=0;i<size;i++)
	{
		printf("original array: %d\n",array[i]);
	}
	reverse_array(array,size);
}
