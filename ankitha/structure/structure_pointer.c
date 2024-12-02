// Online C compiler to run C program online
#include <stdio.h>

struct employee{
    char name[20];
    int emp_id;
    float salary;
};
struct employee e ,*ptr;

int main() {
    struct employee e = {"anki",5536,55000};
    ptr = &e;
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->emp_id);
    printf("%f\n",ptr->salary);
}
