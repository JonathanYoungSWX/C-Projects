/*#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;


    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL;

    current->link = current2;
    

    printf("%d\n", head->data);
    printf("%d\n", current->data);
    printf("%d\n", current2->data);
    free(head);
    head=NULL;
    return 0;
    
}*/

/*
Use a function to count the number of nodes and another to print the nodes content
*/
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
};

void count_nodes (struct node *head) //we pass to the function head (a pointer)
{
    int count = 0;
    if (head == NULL){
        printf("List empty\n");
    }
    else{
        struct node *ptr = NULL;//create a local pointer ptr
        ptr = head; //ptr points to the first node in the list
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->link;//move ptr to the NEXT NODE. If the ptr is NULL, we are at the end of the list, then exit the while loop e stop counting 
        }
        printf("Count: %d\n", count);
    }
}

//function to print the content of the linked list
void printf_data(struct node *head){
    if (head == NULL){
        printf("List empty\n");
    }else{
        struct node *ptr = NULL; //create local pointer
        ptr = head; //assaing it head
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);//printf the content
            ptr = ptr->link;//move to the next element
        }
        
    }
}

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL; 

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    count_nodes(head);
    printf_data(head);

    return 0;
}