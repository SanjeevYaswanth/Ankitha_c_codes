#include <stdio.h>
#include <stdlib.h>

void append(char *str1,char *str2)
{
    char *res = (char *)malloc(11*sizeof(char));
    if(res == NULL)
    {
        printf("Failed to allocate memory in heap memory\n");
        exit(0);
    }
    
    int i;
    for(i=0; i<4 && str2[i]!='\0' ;i++)
    {
        res[i] = str2[i];
    }
    
    for(i=0;str1[i]!='\0';i++)
    {
        res[i+4]=str1[i];
    }
    printf("%s\n",res);
    free(res);
}


void main()
{   
    char *str1,*str2;
    str1 = (char *)malloc(8*sizeof(char));
    if(str1 = NULL)
    {
        printf("Failed to allocate memory in heap segement\n");
        exit(0);
    }
    
    str2 = (char *)malloc(8*sizeof(char));
    if(str2 = NULL)
    {
        printf("Failed to allocate memory in heap segement\n");
        exit(0);
    }
    
    str1 = "ankitha";
    str2 = "mirafra";
    printf("%s\n%s\n",str1,str2);
    
    void (*fun_ptr)(char*,char*);
    
    fun_ptr = append;
    
    fun_ptr(str1,str2);
    
    free(str1);
    free(str2);

}
