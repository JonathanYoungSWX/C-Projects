#include <stdio.h>
#include <stdlib.h>
// Queues - Linked List Implementation
struct node 
{
    int priority;
    int data;
    struct node* link;
} *front = NULL, *rear = NULL; // Pointers are declared globally

//Prototypes
void enqueue(int n, int priority);
int dequeue();
int peek();
void print();
int isEmpty();

void main()
{
    
    int choice, data, priority;
    while(1)
    {
        printf("\n\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print the first element\n");
        printf("4. Print all the elements\n");
        printf("5. Quit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element to be added in the queue: ");
                scanf("%d", &data);
                printf("Enter its priority: ");
                scanf("%d", &priority);
                enqueue(data, priority);
                printf("Element is added in the queue successfully.");
                break;
            case 2:
                data = dequeue();
                printf("Deleted element is: %d", data);
                break;
            case 3:
                printf("The first element of the queue is %d\n", peek());
                break;
            case 4: 
                print();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice.\n");
        }
    }


    printf("\n\n\n");
}

void enqueue(int data, int priority)
{
    struct node* temp = NULL;
    struct node* newNode = malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("No memory space in the heap!");
        exit(1);
    }
    newNode->priority = priority;
    newNode->data = data;
    newNode->link = NULL;                       // initalizing new node with the values inputted by the user
    if(isEmpty()){                              // Case 1 - Nothing exists within the queue
        front = rear = newNode;                 // Made front and rear point to the location of newNode
    }else if(priority < front->priority){       // Case 2 - If the priority of the newNode is more important (in this example less than (ie 1 vs 3)) the current first node. 
        newNode->link = front;                  // Place the new node in the first location
        front = newNode;                        // Move pointer front to point to the new first location
    }
    else
    {                                           //If newNode is not the most important priority (in this example, it is higher than the current first node)
        temp = front;                           //Start the pointer temp at front
        while(temp->link != NULL && temp->link->priority <= priority)      //While the location pointed by temp is not NULL and temp->link-> priority is less than the new node priority value
            temp = temp->link;                   //Move to the next node in the queue. This loops breaks once priority of newNode is less than temp->link or we reach the last node of the queue
        if(temp->link==NULL){                    //Case 4 - If we reach the end of the queue and there was no location to slot the priority node, place at the end            
            temp->link = newNode;                //Change the link stored in the existing node to point to the newNode
            rear = newNode;                      // Make rear point to the new node at the end of the queue
        }else{                                   //Case 3 - The priority of the node is somewhere between the first and rear location
            newNode->link = temp->link;          //Make the newNode link point to the location stored in the current node pointed to by temp 
            temp->link = newNode;                //Change the link stored in the existing node pointed to by temp to point to the newNode
        }
    }
}

int dequeue()
{
    int data;
    struct node* temp;
    if(isEmpty())
    {
        printf("Queue Underflow!"); // Queue is empty
        exit(1);
    }
    temp = front;
    data = temp->data;
    front = front->link;
    free(temp);
    temp = NULL; 
    return data;   
}

int peek()
{
    if(isEmpty())
    {
        printf("Queue Underflow!"); // Queue is empty
        exit(1);
    }
    return front->data;
}

int isEmpty()
{
    if(front == NULL)
        return 1;
    else 
        return 0;
}

void print()
{
    struct node* temp;
    temp = front;
    if(isEmpty())
    {
        printf("Queue Underflow."); // Queue is empty
        exit(1);
    }
    printf("Queue: \n");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}