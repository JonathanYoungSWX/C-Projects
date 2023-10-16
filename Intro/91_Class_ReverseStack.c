#include <stdio.h>
#include <stdlib.h>

// Define the node structure globally
struct node {
    int data;
    struct node* next;
};

// Push() fuction
void push(int data, struct node** top);

// Pop() function
int pop(struct node** top);

// isEmpty() function
int isEmpty(struct node* top);

// TOS() function
int TOS(struct node* top);

// Print() function
void print(struct node* top);

// Reverse_stack() function
void reverse_stack(struct node** top);

int main(){
    struct node* top = NULL;
    for (int i = 1; i <= 10; i++) {
        push(i, &top);
    }
    print(top);
    reverse_stack(&top);
    print(top);
    return 0;
}

// Function to push an element onto the stack
void push(int data, struct node** top) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

// Function to pop an element from the stack
int pop(struct node** top) {
    if (*top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    int data = (*top)->data;
    struct node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

// Function to print the stack
void print(struct node* top) {
    printf("Stack: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

// Function to reverse the stack using two temporary stacks
void reverse_stack(struct node** top) {
    struct node* stack1 = NULL;
    struct node* stack2 = NULL;

    // Traverse the original stack and push each element into stack1
    while (*top != NULL) {
        push(pop(top), &stack1);
    }

    // Traverse stack1 and push each element into stack2
    while (stack1 != NULL) {
        push(pop(&stack1), &stack2);
    }

    // Traverse stack2 and push each element into the original stack
    while (stack2 != NULL) {
        push(pop(&stack2), top);
    }
}