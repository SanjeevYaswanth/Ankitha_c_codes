#include <stdio.h>
void main()
{
	int sum=0,rem,num,min,max,temp;
	printf("Enter the min value and max value : ");
	scanf("%d %d",&min,&max);
	for(num = min; num<=max; num++)
	{
		temp =num;
		while(temp != 0)
		{
			rem= temp%10;
			sum = sum + rem *rem *rem;
			temp = temp/10;
		}
		if(sum == num)
		{
			printf("%d\n",num);
		}
	
	}
}
