#include <stdio.h>
void  find_second_largest(int *arr, int n)
{
	int i;
	int fl=0,sl=0;
	for(i=0;i<n;i++)
	{
		if(arr[i] > fl)
		{
			sl = fl;
			fl = arr[i];
		}
		else if(arr[i] > sl && arr[i] != fl)
		{
			sl = arr[i];
		}
	}
	printf("second largest: %d\n",sl);
}

int main()
{
	int array[7] = {2,1,3,5,6,1,67};
	int i;
	for(i=0; i < 7; i++)
	{
		printf("original array: %d\n",array[i]);
	}
	int size = sizeof(array)/sizeof(array[0]);
	printf("array size: %d\n",size);
	find_second_largest(array,size);
}
