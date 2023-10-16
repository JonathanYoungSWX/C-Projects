#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);
struct node* add_beg(struct node* head, int d);
void add_beg2(struct node** head, int d);
void count_of_nodes(struct node *head);
void print_data(struct node *head);
void del_last(struct node* head);
void add_at_pos(struct node *head, int data, int pos);

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;
    count_of_nodes(head);
    print_data(head);
    add_beg2(&head, 777);
    count_of_nodes(head);
    print_data(head);
    add_at_end(head, 555);
    count_of_nodes(head);
    print_data(head);
    add_at_pos(head, 333, 3);
    count_of_nodes(head);
    print_data(head);
    del_last(head);
    count_of_nodes(head);
    print_data(head);
}

void count_of_nodes(struct node *head){
    int count = 0;
    if (head == NULL){
        printf("List empty\n");
    }
    else{
        struct node *ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->link;
        }
        printf("Number of nodes: %d\n", count);
    }
}

void print_data(struct node *head){
    if (head == NULL){
        printf("List empty\n");
    }
    else{
        while (head != NULL)
        {
            printf("%d\n", head->data);
            head = head->link;
        }
        printf("\n");
    }
}



void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;
    
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node* add_beg(struct node* head, int d){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;
    ptr->link = head;
    head = ptr;
    return head;
}

void add_beg2(struct node** head, int d){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;
    ptr->link = *head;
    *head = ptr;
}

void del_last(struct node* head){
    if (head == NULL){
        printf("List empty\n");
    }
    else if (head->link == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;
        struct node *ptr = head->link;
        while (ptr->link != NULL){
            temp = ptr;
            ptr = ptr->link;
        }
        free(ptr);
        temp->link = NULL;
    }
}

void add_at_pos(struct node *head, int data, int pos){
    if (head == NULL){
        printf("List empty\n");
    }
    else{
        struct node *new_node = malloc(sizeof(struct node));
        new_node->data = data;
        new_node->link = NULL;

        struct node *ptr = head;
        int count = 1;
        while (ptr != NULL && count < pos){
            ptr = ptr->link;
            count++;
        }
        if (count == pos){
            new_node->link = ptr->link;
            ptr->link = new_node;
        }
        else{
            printf("Position not found\n");
        }
    }
}

