#include <stdio.h>
void main()
{
	int rem,rev=0,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int org = num;
	while(num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
	       	num = num / 10;	
	}
	if(org == rev)
	{
		printf("%d is palindrome\n",org);
	}
	else
	{
		printf("%d is not palindome\n",org);
	}


}
