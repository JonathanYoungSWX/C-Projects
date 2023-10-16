#include <stdio.h>
#include <stdlib.h>

// Define the structure of a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to search for an element in the linked list
void searchList(struct Node* head, int key) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == key) {
            printf("Element found at position %d\n", position);
            return;
        }
        current = current->next;
        position++;
    }
    printf("Element not found\n");
}

// Function to delete an element at a given position in the linked list
void deleteNode(struct Node** headRef, int position) {
    if (*headRef == NULL) {
        return;
    }
    struct Node* temp = *headRef;
    if (position == 1) {
        *headRef = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

int main() {
    // Create the head node
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 34;
    head->next = NULL;

    // Create the second node
    struct Node* second = NULL;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 56;
    second->next = NULL;
    head->next = second;

    // Create the third node
    struct Node* third = NULL;
    third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 764;
    third->next = NULL;
    second->next = third;

    // Create the fourth node
    struct Node* fourth = NULL;
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fourth->data = 24;
    fourth->next = NULL;
    third->next = fourth;

    // Create the fifth node
    struct Node* fifth = NULL;
    fifth = (struct Node*)malloc(sizeof(struct Node));
    fifth->data = 94;
    fifth->next = NULL;
    fourth->next = fifth;

    int choice;
    int key;
    int position;

    while (1) {
        printf("Choose a function to run:\n");
        printf("1. Print the list\n");
        printf("2. Search for an element\n");
        printf("3. Delete an element\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printList(head);
                break;
            case 2:
                printf("Enter the element to search for: ");
                scanf("%d", &key);
                searchList(head, key);
                break;
            case 3:
                printf("Enter the position of the element to delete: ");
                scanf("%d", &position);
                deleteNode(&head, position);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}