#include <stdio.h>

int glob = 0;

int main()
{
	int local = 0;
	local ++;
	glob ++;
	printf("%d %d\n",glob,local);
	local++;
	glob++;
	printf("%d %d\n",glob,local);



	return 0;

}
