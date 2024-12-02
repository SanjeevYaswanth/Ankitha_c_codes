#include <stdio.h>


void arr_palindrome(int arr[], int size)
{
	int i,j,flag=0;
	for(i=0;i<=size/2;i++)
	{
		if(arr[i] != arr[size - 1 -i])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
	{
		printf("NOt an palindrome array\n");
	}
	else
	{
		printf("Palindrome array\n");
	}
}

void main()
{
	int arr[]= {1,2,3,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	arr_palindrome(arr,size);
}
