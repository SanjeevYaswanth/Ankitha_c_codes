#include <stdio.h>


// Define the employee structure, which includes an address structure
struct employee {
    char name[20];
    int emp_id;
    float salary;
    struct address{
        char city[20];
        char state[20];
        int zip;
    }emp_address; // Nested structure
};

int main() 
{
    // Initialize an employee instance with nested address structure
    struct employee emp1 = {
        "Ankitha",         // name
        101,               // emp_id
        55000.50,          // salary
        {"Hyderabad","Telangana", 560001} // emp_address (city, state, zip)
    };

    // Access and print employee details, including nested address details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.emp_id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("City: %s\n", emp1.emp_address.city);
    printf("State: %s\n", emp1.emp_address.state);
    printf("ZIP Code: %d\n", emp1.emp_address.zip);

    return 0;
}
