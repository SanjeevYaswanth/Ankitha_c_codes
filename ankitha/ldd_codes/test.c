#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


int main()
{
	char write_buf[100];
	char read_buf[100];
	int fd,ret,opt,bytes_written,bytes_read;
	fd = open("/dev/insert_string", O_RDWR);
	if(fd < 0)
	{
		printf("Failed to open file\n");
		return -1;
	}
	
	while(3)
	{
		printf("0.exit\n1.write\n2.read\n");
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
				printf("Enter the input: ");
				scanf("%[^\n]s",write_buf);
				bytes_written = write(fd,write_buf,strlen(write_buf));
				if(bytes_written < 0)
				{
					printf("failed to write\n");
					close(fd);
					return 1;
				}
			}
			break;

			case 2:
			{
				bytes_read = read(fd,read_buf,sizeof(read_buf)-1);
				if(bytes_read < 0)
				{
					printf("Failed to read data\n");
					close(fd);
					return 1;
				}
				printf("Read buff: %s\n",read_buf);
			}
			break;

			default:
			{
				printf("invalid choice\n");
			}
			break;
		}
	}
	close(fd);
	return 0;
}
