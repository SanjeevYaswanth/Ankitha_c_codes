#include <stdio.h>

extern increment();
extern get_value();
int main()
{
	increment();
	printf("Get value: %d\n",get_value());
	increment();
	printf("Get value: %d\n",get_value());
	increment();
	printf("Get value: %d\n",get_value());
	return 0;
}
