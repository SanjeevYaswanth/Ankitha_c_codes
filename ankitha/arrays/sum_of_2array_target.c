#include <stdio.h>
void main()
{
	int arr[6]={1,2,3,4,5,6};
	int arr1[6]={1,2,3,4,5,6};
	int i,target=10;
	int res[100];
	for(i=0;i<6;i++)
	{
		res[i]=arr[i]+arr1[i];
	}

	if(res == target)
	{
		printf("%d is the target\n",res);
	}



}
