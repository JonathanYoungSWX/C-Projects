#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void print_list(struct Node* head);
int search_list(struct Node* head, int target);
void delete_node(struct Node** head_ptr, int position);
void add_at_end(struct Node** head_ptr, int data);

int main() {
    struct Node* head = NULL;
    add_at_end(&head, 34);
    add_at_end(&head, 56);
    add_at_end(&head, 764);
    add_at_end(&head, 24);
    add_at_end(&head, 94);

    int choice;
    while (1) {
        printf("Choose an operation:\n");
        printf("1. Print the list\n");
        printf("2. Search for an element\n");
        printf("3. Delete an element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("List: ");
                print_list(head);
                break;
            case 2:
                printf("Enter the element to search for: ");
                int target;
                scanf("%d", &target);
                int position = search_list(head, target);
                if (position == -1) {
                    printf("%d not found in list\n", target);
                } else {
                    printf("%d found at position %d\n", target, position);
                }
                break;
            case 3:
                printf("Enter the position of the element to delete: ");
                int delete_pos;
                scanf("%d", &delete_pos);
                delete_node(&head, delete_pos);
                printf("List after deleting element at position %d: ", delete_pos);
                print_list(head);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

void add_at_end(struct Node** head_ptr, int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;

    if (*head_ptr == NULL) {
        *head_ptr = new_node;
        new_node->next = new_node;
    } else {
        struct Node* current = *head_ptr;
        while (current->next != *head_ptr) {
            current = current->next;
        }
        current->next = new_node;
        new_node->next = *head_ptr;
    }
}

void print_list(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int search_list(struct Node* head, int target) {
    if (head == NULL) {
        return -1;
    }

    struct Node* current = head;
    int position = 0;
    do {
        if (current->data == target) {
            return position;
        }
        current = current->next;
        position++;
    } while (current != head);

    return -1;
}

void delete_node(struct Node** head_ptr, int position) {
    if (*head_ptr == NULL) {
        return;
    }

    struct Node* current = *head_ptr;
    struct Node* prev = NULL;
    int current_pos = 0;

    // Traverse the list to find the node to delete
    while (current_pos != position) {
        prev = current;
        current = current->next;
        current_pos++;

        // If we've reached the end of the list without finding the position, exit
        if (current == *head_ptr) {
            return;
        }
    }

    // If the node to delete is the head node, update the head pointer
    if (current == *head_ptr) {
        *head_ptr = current->next;
    }

    // Update the previous node's next pointer to skip over the current node
    if (prev != NULL) {
        prev->next = current->next;
    }

    // Free the memory allocated for the current node
    free(current);
}