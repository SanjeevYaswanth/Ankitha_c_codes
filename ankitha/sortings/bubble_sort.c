#include <stdio.h>
void main()
{
	int arr[10]={4,1,2,3,5,8,6,7,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i,j,temp;
	int flag = 0;
	for(i=0;i< size -1;i++)
	{
		flag = 1;
		for(j=0; j< size -i -1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
				flag = 0;
			}
		
			if(flag == 0)
			{
				break;
			}
		}
	}

	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}




















}
