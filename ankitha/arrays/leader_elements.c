//Write a program to print all the Leaders in the array. An element is a Leader if it is greater than all the elements to its right side.

/*Input: arr[] = {16, 17, 4, 3, 5, 2}
Output: 17 5 2
Explanation:

17 is greater than all the elements to its right: 4, 3, 5 and 2, therefore 17 is a leader.
5 is greater than all the elements to its right: 2, therefore 5 is a leader.
2 has no element to its right, therefore 2 is a leader.
Input: arr[] = {1, 2, 3, 4, 5, 2}
Output: 5 2
Explanation:

5 is greater than all the elements to its right: 2, therefore 5 is a leader.
2 has no element to its right, therefore 2 is a leader.
*/

#include <stdio.h>

void print_leader(int arr[], int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i] <= arr[j])
			{

				break;
			}
		}
		if(j == size)
		{
			printf("%d\n",arr[i]);
		}
	}
}


void main()
{
	int arr[]={1,2,3,4,5,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	print_leader(arr,size);
}
