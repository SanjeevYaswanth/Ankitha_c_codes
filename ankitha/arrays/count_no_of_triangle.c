//Given an unsorted array of positive integers, find the number of triangles that can be formed with three different array elements as three sides of triangles. For a triangle to be possible from 3 values, the sum of any of the two values (or sides) must be greater than the third value (or third side).

/* Input: arr= {4, 6, 3, 7}
Output: 3
Explanation: There are three triangles 
possible {3, 4, 6}, {4, 6, 7} and {3, 6, 7}. 
Note that {3, 4, 7} is not a possible triangle.
*/

#include <stdio.h>

void count_triangle(int *arr,int size)
{
	int i,j,k,count=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			for(k=j+1;k<size;k++)
			{
				if(arr[i] + arr[j] > arr[k] && arr[j] + arr[k] > arr[i]
					&& arr[i] + arr[k] > arr[j])
				{
					count++;
				}
			}
		}
	}
	printf("no of triangle: %d\n",count);

}


void main()
{
	int arr[]={4,6,3,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	count_triangle(arr,size);
}
