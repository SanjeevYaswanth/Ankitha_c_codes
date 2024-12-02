#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head = NULL;

void add_at_beg(int num)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL)
	{
		printf("Failed to allocate memory\n");
		return;
	}
	new_node->data = num;
	new_node->prev = NULL;
	new_node->next = head;
	if(head != NULL)
	{
		new_node->next->prev = new_node;
	}
	head = new_node;
}

void del_at_beg()
{
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *temp = head;
	if(head->next == NULL) // ------------ If list contains single node ---------------------
	{
		free(head);
		head = NULL;
		return;
	}

	head = head->next;
	head->prev = NULL;
	free(temp);
	
}

void display()
{
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}

	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp= temp->next;
	}
}

void count()
{
	int count = 0;
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}

	struct node *temp = head;
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	printf("%d\n",count);

}

void search(int value)
{
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *temp = head;
	while(temp != NULL)
	{
		if(temp->data == value)
		{
			printf("%d element found\n",temp->data);
			return;
		}
	temp = temp->next;
	}
	printf("Element not found\n");
}


// ======================================================== Main function ===========================================================

void main()
{
	int opt,num,value;
	while(1)
	{
		printf("Enter the option\n\n0.exit\n1.add_at_begining\n2.delete at begining\n3.display\n4.count\n5.search\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
			{
				printf("Exit succesfuuly\n");
				exit(0);

			}
			break;

			case 1:
			{
				printf("Enter the number: ");
				scanf("%d",&num);
				add_at_beg(num);
			}
			break;

			case 2:
			{
				del_at_beg();
			}

			case 3:
			{
				printf("------ Display ----------\n");
				display();
			}
			break;

			case 4:
			{
				printf("-------- Count -------------\n");
				count();
			}
			break;

			case 5:
			{
				printf("Enter the number to search: ");
				scanf("%d",&num);
				search(num);
			}
			break;

			default:
			printf("Invalid option\n");
		
		}
	}
}
