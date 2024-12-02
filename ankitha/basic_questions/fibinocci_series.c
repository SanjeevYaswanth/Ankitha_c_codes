// =============== Finonocci series ====================
// it is sequence where next term is the sum of previous two terms


#include <stdio.h>
void main()
{
	int t1 = 0, t2 =1,n,i;
	int next = t1 + t2;

	printf("Enter the series to range: ");
	scanf("%d",&n);

	printf("%d \t %d\n",t1,t2);
	
	for(i=3 ; i<=n ; i++)
	{
		printf("%d\t",next);
		t1 = t2;
		t2  = next;
		next = t1  + t2;
	}
	printf("\n");
}
