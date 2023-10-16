#include <stdio.h>
#include <stdlib.h>

typedef struct StructNode {
    int data;
    struct StructNode *next;
} StructNode;

void removeDuplicates(StructNode **head) {
    StructNode *current = *head;
    StructNode *temp;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            temp = current->next->next;
            free(current->next);
            current->next = temp;
        } else {
            current = current->next;
        }
    }
}

void sortAscending(StructNode **head) {
    StructNode *current = *head;
    StructNode *index = NULL;
    int temp;
    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

void insertBeginning(StructNode **head, int value) {
    StructNode *newNode = (StructNode*)malloc(sizeof(StructNode));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertEnd(StructNode **head, int value) {
    StructNode *newNode = (StructNode*)malloc(sizeof(StructNode));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        StructNode *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertAtPosition(StructNode **head, int value, int position) {
    StructNode *newNode = (StructNode*)malloc(sizeof(StructNode));
    newNode->data = value;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
    } else {
        StructNode *current = *head;
        int i;
        for (i = 0; i < position - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        } else {
            free(newNode);
            printf("Error: position out of range\n");
        }
    }
}

void deleteAtBeginning(StructNode **head) {
    if (*head != NULL) {
        StructNode *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void deleteAtEnd(StructNode **head) {
    if (*head != NULL) {
        if ((*head)->next == NULL) {
            free(*head);
            *head = NULL;
        } else {
            StructNode *current = *head;
            while (current->next->next != NULL) {
                current = current->next;
            }
            free(current->next);
            current->next = NULL;
        }
    }
}

void deleteAtPosition(StructNode **head, int position) {
    if (*head != NULL) {
        if (position == 0) {
            StructNode *temp = *head;
            *head = (*head)->next;
            free(temp);
        } else {
            StructNode *current = *head;
            int i;
            for (i = 0; i < position - 1 && current != NULL; i++) {
                current = current->next;
            }
            if (current != NULL && current->next != NULL) {
                StructNode *temp = current->next;
                current->next = current->next->next;
                free(temp);
            } else {
                printf("Error: position out of range\n");
            }
        }
    }
}

int findLargest(StructNode *head) {
    int largest = head->data;
    StructNode *current = head->next;
    while (current != NULL) {
        if (current->data > largest) {
            largest = current->data;
        }
        current = current->next;
    }
    return largest;
}

void reverseOrder(StructNode **head) {
    StructNode *prev = NULL;
    StructNode *current = *head;
    StructNode *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int findSum(StructNode *head) {
    int sum = 0;
    StructNode *current = head;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

void swapTwo(StructNode **head) {
    if (*head != NULL && (*head)->next != NULL) {
        StructNode *node1 = *head;
        StructNode *node2 = (*head)->next;
        node1->next = node2->next;
        node2->next = node1;
        *head = node2;
    } else {
        printf("Error: Linked list has fewer than two nodes\n");
    }
}

void printList(StructNode *head) {
    StructNode *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    StructNode *head = NULL;
    insertEnd(&head, 34);
    insertEnd(&head, 5);
    insertEnd(&head, 67);
    insertEnd(&head, 4);
    insertEnd(&head, 37);
    insertEnd(&head, 23);
    insertEnd(&head, 4);
    insertEnd(&head, 8);
    insertEnd(&head, 67);
    insertEnd(&head, 10);

    printf("Original linked list: ");
    printList(head);

    int largest = findLargest(head);
    printf("Largest element in the linked list: %d\n", largest);

    reverseOrder(&head);
    printf("Linked list after reversing the order: ");
    printList(head);

    int sum = findSum(head);
    printf("Sum of all elements in the linked list: %d\n", sum);

    swapTwo(&head);
    printf("Linked list after swapping two nodes: ");
    printList(head);

    sortAscending(&head);
    printf("Linked list after sorting in ascending order: ");
    printList(head);

    removeDuplicates(&head);
    printf("Linked list after removing duplicates: ");
    printList(head);

    insertBeginning(&head, 100);
    printf("Linked list after inserting 100 at the beginning: ");
    printList(head);

    insertEnd(&head, 200);
    printf("Linked list after inserting 200 at the end: ");
    printList(head);

    insertAtPosition(&head, 100, 3);
    printf("Linked list after inserting 100 at position 3: ");
    printList(head);

    deleteAtBeginning(&head);
    printf("Linked list after deleting the first element: ");
    printList(head);

    deleteAtEnd(&head);
    printf("Linked list after deleting the last element: ");
    printList(head);

    deleteAtPosition(&head, 2);
    printf("Linked list after deleting element at position 2: ");
    printList(head);

    return 0;
}