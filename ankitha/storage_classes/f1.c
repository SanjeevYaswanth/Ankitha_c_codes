#include<stdio.h>
int x =2;
int *ptr = &x;
int fun();
int main()
{
	fun();
	x++;
	fun();
	x--;
	fun();
	return 0;
}
