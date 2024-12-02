#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;

};

struct node* top = NULL;

void push(int value)
{
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
	if(new_node == NULL)
	{
		printf("Failed to allocate memory in heap segment\n");
		return;
	}
	
	if(new_node != NULL)
	{
		new_node->data = value;

		if(top == NULL)
		{
			new_node->next = NULL;
		
		}
		else
		{
			new_node->next = top;
		}
		top = new_node;

		printf("inserted data in new node: %d\n",new_node->data);
	}
	else
	{
		printf("malloc error");
	}
}

int pop()
{
	int data;
	if(top == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
		struct node *temp = top;
		data = top->data;
		top = top->next;
		free(top);
		printf("pop value: %d\n",data);
	}
	return data;
}

void display()
{
	struct node* temp=top;
	if(top == NULL)
	{
		printf("List is empty\n");
		return 0;
	}

	while(temp->next != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;  
	}
	 printf("%d", temp->data);
}

void count()
{
	struct node* temp = top;
	if(top == NULL)
	{
		printf("List is empty\n");
		return;
	}
	int count =0;
	while(temp != NULL)
	{
		count++;
		temp= temp->next;
		printf("%d count\n",count);
	}
	printf("count: %d\n",count);
}

int search(int num)
{
	struct node* temp = top;
	if(top == NULL)
	{
		printf("List is empty\n");
		return 0;
	}
	if(temp->data == num)
	{
		printf("Element found: %d\n",temp->data);
	}
	else
	{
		printf("Element not found\n");
	}

}


//------------------------------------------------  Main function  ----------------------------------------------------------------------------------

void main()
{
	int opt,num;
	struct list *stack;
	while(1)
	{
		printf("0.exit\n1.push\n2.pop\n3.display\n4.count\n5.search\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
			{
				printf("exit successfully\n");
				exit(0);
			}
			break;
			case 1:
			{
				printf("Enter the data: ");
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
				display();
			}
			break;
			case 4:
			{
				count();
			}
			break;
			case 5:
			{
				printf("Enter the data to search: ");
				scanf("%d",&num);
				search(num);
			}
			break;
			default:
			{
				printf("Invalid option\nplease choose proper input\n");
			}
		}
	
	}
}
