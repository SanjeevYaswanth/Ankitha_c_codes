#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create_list(int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Failed to allocate memory\n");
        return;
    }
    struct node *temp;

    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = temp=new_node;
    } else {
        temp->next=new_node;
        temp=new_node;
    }
}

void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int opt, data, cnt;

    printf("Enter the option:\n0. Exit\n1. Create\n2. Display\n");

    while (1) {
        printf("Option: ");
        scanf("%d", &opt);

        switch (opt) {
        case 0:
            exit(0);

        case 1:
            printf("Enter the number of elements to add: ");
            scanf("%d", &cnt);

            for (int i = 0; i < cnt; i++) {
                printf("Enter data for node %d: ", i + 1);
                scanf("%d", &data);
                create_list(data);
            }
            break;

        case 2:
            display();
            break;

        default:
            printf("Invalid option\n");
        }
    }

    return 0;
}
