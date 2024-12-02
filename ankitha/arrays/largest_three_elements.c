#include <stdio.h>

void main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i,fl=0,sl,tl;
	for(i=0;i<size;i++)
	{
		if(arr[i] > fl)
		{
			tl =sl;
			sl = fl;
			fl = arr[i];
		}
		else if(arr[i] > sl)
		{
			tl = sl;
			sl = arr[i];
		}
		else if(arr[i] > tl)
		{
			tl = arr[i];
		}
	}
	printf("fl: %d sl: %d tl: %d\n",fl,sl,tl);
}
