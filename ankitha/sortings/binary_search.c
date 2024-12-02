#include <stdio.h>

int binary_search(int *arr,int size,int x)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;		
			}
		}
	}
	int low =0;
	int upper = size -1;
	int mid;
	while(low<=upper)
	{
		mid = low +(upper - low)/2;
		if(arr[mid] == x)
		{
			return mid;
		}
		if(arr[mid] < x)
		{
			low = mid +1;
		}
		else
		{
			upper = mid -1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x;
	printf("Enter element to find: ");
	scanf("%d",&x);
	int res = binary_search(arr,size,x);
	if (res != -1) {
       		 printf("Element found at index: %d Value: %d\n", res, arr[res]);
    	}
	else
       	{
       		 printf("Element not found\n");
   	 }
	return 0;

}
