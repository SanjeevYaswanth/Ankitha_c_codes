#include <stdio.h>  //====================================== Standard input and output =========================
#include <stdlib.h> //====================================== Standard library ==================================


//========================================================== Structure defination =============================
struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;
//==============================================================================================================

//============================================================ Function defination for Adding the elements at beginning ===================================
void add_at_beg(int num)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL)
	{
		printf("Failed to allocate memory in heap segment\n");
		return;
	}
	new_node->data = num;
	new_node->next = head;
	head = new_node;
}
//==========================================================================================================================================================

//=========================================================== Function defination to Display all elements ==================================================
void display()
{
	if(head == NULL)
	{
		printf("List is empty\n");
		exit(0);
	}
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}
//==========================================================================================================================================================

//=========================================================== Function defination to delete begining elements ==============================================
void del_at_beg()
{
	if(head == NULL)
	{
		printf("List is empty\n");
		exit(0);
	}

	struct node *temp = head;
	head = head->next;
	free(temp);
}
//==========================================================================================================================================================

//======================================================= Function defination to count all the elements present in list ====================================
void count()
{
	int count = 0;
	struct node *temp = head;
	if(head == NULL)
	{
		printf("List is empty\n");
		exit(0);
	}
	while(temp != NULL)
	{
		count++;
		printf("count: %d\t Data: %d\n",count,temp->data);
		temp = temp->next;
	}
	printf("Total count: %d\n",count);

}
//=============================================================================================================================================================

//======================================================= Function defination ro serach the elements in list ==================================================
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
			printf("Element found: %d\n",temp->data);
			return;
		}
		temp = temp->next;
	}
	printf("Element not found\n");

}
//=============================================================================================================================================================

//================================================== Function defination to add after the node ================================================================
void add_after_node(int num,int value)
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp = head;

	while(temp != NULL)
	{
		if(temp->data == num)
		{
			struct node *new = (struct node *)malloc(sizeof(struct node));
			if(new == NULL)
			{
				printf("Failed to allocate memory in heap\n");
				exit(0);
			}
			new->data = value;
			new->next = temp->next;
			temp->next = new;
		}
	temp= temp->next;
	
	}
}
//=============================================================================================================================================================

//======================================================= Function defination to add before a node ============================================================
void add_before_node(int num, int value)
{
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *prev,*cur;
	if(head->data == num)
	{
		struct node *new = (struct node *)malloc(sizeof(struct node));
		if(new == NULL)
		{
			printf("Failed to alloacte memory in heap segment\n");
			exit(0);
		}
		new->data = value;
		new->next = head;
		head = new;
		return;
	}
	prev = head;
	cur = head->next;
	while(cur->next != NULL)
	{
		if(cur->data == num)
		{
			struct node *new = (struct node*)malloc(sizeof(struct node));
			if(new == NULL)
			{
				printf("Failed to allocate memory in heap\n");
				exit(0);
			}
			new->data = value;
			prev->next = new;
			new->next = prev->next;
		}
	
	}
	prev= cur;
	cur = cur->next;
}
//=================================================================================================================================================

//==================================================== Function defination to delete entire list ==================================================
void delete_entire_list()
{
	if(head == NULL)
	{
		printf("List ie empty\n");
		return;
	}
	struct node *temp = head;
	while(temp != NULL)
	{
		head= head->next;
		free(temp);
		temp= head;
	}
}
//================================================================================================================================================

//===================================================== Function defination to delete particular node in list ====================================
void del_particular_node(int num)
{
	if(head == NULL)
	{
		printf("List is empty\n");
		exit(0);
	}
	struct node *prev, *cur;
	if(head->data == num)
	{
		if(head->next == NULL) // ============ if it has single node =============
		{
			free(head);
			head = NULL;
			return;
		}
		cur = head; // ====================== if it is first node to delete but list has multiple node =================
		head = head->next;
		free(cur);
		return;
	}
	prev = head;
	cur = head->next;
	while(cur != NULL) // ============================ iterate through all nodes ==================================
	{
		if(cur->data == num)  // ======================= if given element found ================================
		{
			prev->next = cur->next;
			free(cur);
			return;
		}
		prev = cur;
		cur = cur->next;
	}

	printf("Element not found\n");
}
//=================================================================================================================================================

//============================================================ Function defination to reverse the list ============================================
void rev_list()
{
	
	if(head == NULL)
	{
		printf("List is empty");
		return;
	
	}
	
	struct node *prev,*next,*cur;
	prev = NULL;
	cur = head;
	while(cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
}
//===================================================================================================================================================

//========================================================== Function defination to create a list ==================================================
void create_list(int *iptr, int n)
{
	struct node *prev,*temp,*start = NULL;
	for(int i =0 ;i<n ; i++)
	{
		struct node *ptr = (struct node*)malloc(sizeof(struct node));
		if(ptr == NULL)
		{
			printf("Failed to allocate memory in heap\n");
			exit(0);
		}
		ptr->data = iptr[i];
		ptr->next = NULL;
		if(start == NULL)
		{
			start = ptr;
		}
		else
		{
			ptr->next = ptr;
			prev = ptr;
		}
	}

	if(head == NULL)
	{
		head = start;
		return;
	}
	temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
	}
	temp->next = start;



}
//===================================================================================================================================================

//===================================================================== MAIN FUNCTION ===============================================================

void main()
{
	int opt,num,value,cnt;
	while(1)
	{
		printf("\nENTER THE OPTION TO PERFORM: \n\n0.exit\n1.add at beg\n2.del at beg\n3.display\n4.count\n5.search\n6.add after node\n7.add before node\n8.delete entire list\n9.delete particular node\n10.reverse the list\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
			{
				printf("Exit successfully\n");
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
			break;

			case 3:
			{
				printf("----------- DISPLAY ------------\n");
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
				printf("Enter the number to search: ");
				scanf("%d",&num);
				search(num);
			}
			break;

			case 6:
			{
				printf("Enter the number and value: ");
				scanf("%d %d",&num,&value);
				add_after_node(num,value);
			}
			break;

			case 7:
			{
				printf("Enter the number and value: ");
				scanf("%d %d",&num,&value);
				add_before_node(num,value);
			}
			break;

			case 8:
			{
				printf("Entire lis deleted\n");
				delete_entire_list();
			}
			break;

			case 9:
			{
				printf("Enter the number to delete: ");
				scanf("%d",&num);
				del_particular_node(num);
			}
			break;

			case 10:
			{
				printf("---------- Reverse the list ----------");
				rev_list();
			}
			break;

			case 11:
			{
				printf("Enter the count: ");
				scanf("%d",&cnt);
				int *ptr;
				ptr = (int *)malloc(cnt *(sizeof(int)));
				if(ptr == NULL)
				{
					printf("Failed to allocate memory in heap\n");
					exit(0);
				}

				for(int i =0 ;i<cnt;i++)
				{
					printf("Enter the input: ");
					scanf("%d",&ptr[i]);
				}
				create_list(ptr,cnt);
				free(ptr);
			}
			break;

			default:
				printf("Invalid option\n");
		
		}
	
	
	}
}
