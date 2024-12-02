// print first repeated element

#include <stdio.h>
void main()
{
	int arr[7]={1,2,3,4,3,2,1};
	int i,j;
	int flag =0;
	for(i=0;i<7;i++)
	{
		for(j=i+1; j<7;j++)
		{
			if(arr[i] == arr[j])
			{
				printf("first repeated element: %d\n",arr[i]);
				flag =1;
				continue;
			}
		}
		if(flag == 1)
		{
			break;//---------- outer loop -------------
		}
		
	}
	
}
