#include <stdio.h>

void main()
{
	int arr[10]= {6,3,7,2,1,8,9,10,4,5};
	int mid_ind;
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		mid_ind = i;
		for(j=i+1; j<10; j++)
		{
			if(arr[j]<arr[mid_ind] )
			{
				mid_ind = j;
			}
		}
		if(mid_ind != i)
		{
			temp = arr[i];
			arr[i] = arr[mid_ind];
			arr[mid_ind] = temp;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}
