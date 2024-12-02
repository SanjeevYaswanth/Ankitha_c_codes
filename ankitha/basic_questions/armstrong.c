#include <stdio.h>
void main()
{
	int rem,rev =0 ,num,org;
	printf("Enter the number: ");
	scanf("%d",&num);
	org = num;
	while(num != 0)
	{
		rem = num %10;
		rev =rev + (rem * rem * rem);
		num = num / 10;
	}
	if(org == rev)
	{
		printf("%d is armstrong number\n",org);
	}
	else
	{
		printf("%d is not arm strong number\n",org);
	}


}
