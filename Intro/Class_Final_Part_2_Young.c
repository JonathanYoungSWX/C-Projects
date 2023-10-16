#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to search for a node with a given value and return its position
int search(struct Node* head, int value) {
    int pos = 1;
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            return pos;
        }
        pos++;
        temp = temp->next;
    }
    return -1;
}

// Function to delete a node at a given position
void deleteAtPos(struct Node** head, int pos) {
    if (*head == NULL) {
        return;
    }
    struct Node* temp = *head;
    if (pos == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < pos; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

// Function to sort the doubly linked list in ascending order
void sort(struct Node** head) {
    struct Node* i, *j;
    int temp;
    for (i = *head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// Function to transform the doubly linked list into a circular doubly linked list
void makeCircular(struct Node** head) {
    if (*head == NULL) {
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = *head;
    (*head)->prev = temp;
}

void print(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, value, pos, option;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    while (1) {
        printf("Choose an option:\n");
        printf("1. Insert a value\n");
        printf("2. Search for a value\n");
        printf("3. Delete a value\n");
        printf("4. Sort the list\n");
        printf("5. Make the list circular\n");
        printf("6. Print\n");
        printf("7. Exit\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter a value: ");
                scanf("%d", &n);
                insertAtEnd(&head, n);
                break;
            case 2:
                printf("Enter a value to search: ");
                scanf("%d", &value);
                pos = search(head, value);
                if (pos == -1) {
                    printf("Value not found\n");
                } else {
                    printf("Value found at position %d\n", pos);
                }
                break;
            case 3:
                printf("Enter a position to delete: ");
                scanf("%d", &pos);
                deleteAtPos(&head, pos);
                break;
            case 4:
                sort(&head);
                break;
            case 5:
                makeCircular(&head);
                break;
            case 6:
                print(head);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid option\n");
        }
    }
}