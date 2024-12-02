#include <stdio.h>

int main()
{
	FILE *file;
	
	char file_name[100];
	char word[100];
	char temp[100];

	file = fopen("file.txt" , r);
	if(file  == NULL)
	{
		printf("Failed to opne file\n");
		return 0;
	}

}
