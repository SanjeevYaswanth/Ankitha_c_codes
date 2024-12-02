#include <stdio.h>
#include <stdlib.h>

#define N 5
int stack[N];
int top =-1;

int push(int num)
{
	if(top == N -1 )
	{
		printf("stack overflow\n");
		return 0;
	}
	else
	{
	top++;
	stack[top] = num;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("underflow\n");
		return;
	}
	else
	{
		top--;
	}
}

int display(int *ptr)
{
	int i;
	if(top == -1)
	{
		printf("List is empty\n");
	}
	for(i=0; i<=top; i++)
	{
		printf("%d\n",ptr[i]);
	}
}

int count(int *ptr)
{
	int i,count=0;
	for(i=0;i<=top;i++)
	{
		count++;
	}
	printf("%d count\n",count);
}

int search(int *ptr, int item)
{

	if(top == -1)
	{
		printf("List is empty\n");
		return 0;
	}
	int i;
	for(i=0;i<=top;i++)
	{
		if(ptr[i] == item)
		{
			return ptr[i];
		}
	
	}
	return -1;
}



void main()
{
	int opt,num,val;
	while(1)
	{		printf("Enter the option\n\n0.exit\n1.push\n2.pop\n3.display\n4.count the elements\n5.search the element\n");
			scanf("%d",&opt);
			switch(opt)
			{
				case 0:
				{
					printf("Exit succesfully\n");
					exit(0);
				}
				break;

				case 1:
				{
					printf("Enter the input: ");
					scanf("%d",&num);
					push(num);
				}
				break;

				case 2:
				{
					pop();
				}
				break;

				case 3:
				{
					display(stack);
				}
				break;

				case 4:
				{
					count(stack);
				}
				break;

				case 5:
				{
					printf("Enter the element to search: ");
					scanf("%d",&val);
					int res = search(stack,val);
					if(res == -1 )
					{
						printf("element not found\n");
					}
					else
					{
						printf("element found: %d\n",res);
					}
				}
				break;

				default:
				{
					printf("invalid input\n");
				}
				break;
			}
	}

}


