#include <stdio.h>
#include "header.h"

int main()
{
	int arr[]={1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	rev(arr,size);
	return 0;
}

