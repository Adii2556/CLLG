#include<stdio.h>
#include<stdlib.h>

// Doubly linked list node structure
struct Node
{
    int data;           // Data part of the node
    struct Node *prev;  // Pointer to the previous node
    struct Node *next;  // Pointer to the next node
};

struct Node *head;      // Head pointer for the first node
struct Node *tail;      // Tail pointer for the last node

// Function to create a doubly linked list
int createDLL()
{
    struct Node *newNode;
    head = 0;
    int ch = 1;
    while (ch)
    {
        newNode = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory for a new node
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->prev = 0;
        newNode->next = 0;

        if (head == 0)
        {
            head = tail = newNode; // If list is empty, initialize head and tail
        }
        else
        {
            newNode->prev = tail; // Link new node's prev to the current tail
            tail->next = newNode; // Link the new node to the end of the list
            tail = newNode;       // Move tail to the new last node
        }

        printf("Do you want to add another node? (1 , 0): ");
        scanf("%d", &ch);
    }
    return 0;
}

// Function to insert at Beginning
int insertAtBeg()
{
    struct Node *newNode;
    newNode = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    
    newNode->prev = 0;
    newNode->next = head;           // Link the new node to the current head

    head->prev = newNode;           // Old head's prev now points to the new node
    head = newNode;                 // Update head to the new node
    
    return 0;
}

// Function to insert at End
int insertAtEnd()
{
    struct Node *newNode;
    newNode = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    
    newNode->next = 0;
    newNode->prev = tail;       // Link new node's prev tail
    tail->next = newNode;       // Link tail's next to the new node
    tail = newNode;             // Update tail to the new node
    
    return 0;
}

// Function to insert at a specific position
int insertAtPos()
{
    struct Node *newNode, *temp;
    int pos, i=1;
    newNode = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;     // Link the new node to the next node
    newNode->prev = temp;           // Link the new node's prev to temp

    temp->next->prev = newNode;     // Update the next node's prev to the new node
    temp->next = newNode;           // Link the previous node to the new node

    return 0;
}

// Function to delete at Beginning
int deleteAtBeg()
{
    struct Node *temp;
    temp = head->next;

    free(head);
    head = temp;        // Update head to new first node
    temp->prev = 0;     

    return 0;
}

// Function to delete at End
int deleteAtEnd()
{
    struct Node *temp;
    
    temp = tail->prev;
    temp->next = 0;    // New tail has no next node

    free(tail);
    tail = temp;

    return 0;
}

// Function to delete at specific position
int deleteAtPos()
{
    struct Node *p1, *p2;
    int pos, i=1;

    printf("Enter position: ");
    scanf("%d", &pos);

    p1 = head;
    while (i < pos-1)
    {
        p1 = p1->next;
        i++;
    }

    p2 = p1->next;
    p1->next = p2->next;
    p2->next->prev = p1;    // Update the next node's prev to skip p2
    
    free(p2);

    return 0;
}

// Function to display the doubly linked list forward (head to tail)
int DisplayDLL()
{
    struct Node *temp;
    temp = head;
    printf("\nForward : ");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

// Function to display the doubly linked list backward (tail to head)
int DisplayDLLReverse()
{
    struct Node *temp;
    temp = tail;
    printf("\nBackward: ");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}


int main()
{
    createDLL();          // Create the doubly linked list              Line: 16
    insertAtBeg();        // Insert a new node at the beginning         Line: 47
    insertAtEnd();        // Insert a new node at the end               Line: 64
    insertAtPos();        // Insert a new node at position              Line: 87
    deleteAtBeg();        // Delete a node at beginning                 Line: 123
    deleteAtEnd();        // Delete a node at end                       Line: 144
    deleteAtPos();        // Delete a node at position                  Line: 158
    DisplayDLL();         // Display the doubly linked list forward     Line: 184
    DisplayDLLReverse();  // Display the doubly linked list backward    Line: 199

    return 0;
}