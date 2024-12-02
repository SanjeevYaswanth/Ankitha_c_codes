#include <stdio.h>

void move_zero_left(int *arr,int len)
{
	int i,pos=len-1;
	for(i=len-1;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			arr[pos]=arr[i];
			pos--;
		}
	}
	while(pos>=0)
	{
		arr[pos]=0;
		pos--;
	}
	for(i=0;i<len;i++)
	{
		printf("%d\n",arr[i]);
	}

}


void main()
{
	int arr[]={1,0,2,0,3,0,4,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	move_zero_left(arr,size);
}
