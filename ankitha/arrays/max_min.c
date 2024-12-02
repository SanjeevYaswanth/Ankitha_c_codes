#include <stdio.h>

void main()
{
	int arr[10]= {2,1,3,5,7,8,9,6,4,10};
	int max = arr[0];
	int min = arr[0];
	int i;
	for(i=0; i<10 ;i++)
	{
		if(arr[i] >  max)
		{
			max = arr[i];
		}
		else if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d min %d max\n",min,max);


}
