#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[20];
    int emp_id;
    float salary;
};

void display(struct employee *ptr) {
    printf("Name: %s\n", ptr->name);
    printf("Emp ID: %d\n", ptr->emp_id);
    printf("Salary: %.2f\n", ptr->salary);
}

int main() {
    struct employee *ptr;

    // Allocate memory for the structure
    ptr = (struct employee *)malloc(sizeof(struct employee));
    if (ptr == NULL) {
        printf("Failed to allocate memory in heap\n");
        exit(0);
    }

    // Copy string into name manually
    char tempName[] = "Ankitha";
    int i = 0;
    while (tempName[i] != '\0') {
        ptr->name[i] = tempName[i];
        i++;
    }
    ptr->name[i] = '\0'; // Null-terminate the string

    // Initialize other structure members
    ptr->emp_id = 5536;
    ptr->salary = 550000.0;

    // Display employee details
    display(ptr);

    // Free allocated memory
    free(ptr);

    return 0;
}

