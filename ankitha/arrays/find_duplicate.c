#include <stdio.h>

int find_dup(int *arr, int n)
{
	int i,j;
	int flag =0;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n ;j++)
		{	
			if(arr[i] == arr[j])
			{
				printf("%d found as duplicate element\n",arr[i]);
				flag =1;				
			}
		}
	}
	if(!flag)
	{
		printf("Dup element not found\n");
	}
}

int main()
{
	int array[5]= {3,2,1,3,2};
	int size = sizeof(array)/sizeof(array[0]);
	 find_dup(array,size);
	
}
