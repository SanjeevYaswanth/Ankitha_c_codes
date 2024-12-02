#include <stdio.h>

void main()
{
	int arr[]={5,4,3,2,7,8,1,9,10};
	int x,i,flag=0;
	printf("Enter the number to find: ");
	scanf("%d",&x);
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		if(arr[i] == x)
		{
			printf("Element found: %d\n",arr[i]);
			flag=1;
			break;
		}
	
	}
	if(!flag)
	{
		printf("Element not found\n");
	}
}
