#include<stdio.h>
#include<stdlib.h>

// Circular doubly linked list node structure
struct Node
{
    int data;           // Data part of the node
    struct Node *prev;  // Pointer to the previous node
    struct Node *next;  // Pointer to the next node
};

struct Node *head;      // Head pointer for the first node
struct Node *tail;      // Tail pointer for the last node

// Function to create a circular doubly linked list
int createCDLL()
{
    struct Node *newNode;
    head = 0;
    tail = 0;
    int ch = 1;

    while(ch)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for a new node

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->prev = 0;
        newNode->next = 0;

        if(head == 0)
        {
            head = tail = newNode;       // If list is empty, initialize head and tail
            newNode->next = head;        // Point new node to head
            newNode->prev = tail;        // Point new node to tail
        }
        else
        {
            newNode->prev = tail;        // Link new node to the current tail
            newNode->next = head;        // Link new node to the head

            tail->next = newNode;        // Link current tail to new node
            head->prev = newNode;        // Link head back to new node

            tail = newNode;              // Move tail to the new last node
        }

        printf("Do you want to add another node? (1, 0): ");
        scanf("%d", &ch);
    }

    return 0;
}

// Function to insert at Beginning
int insertAtBeg()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->prev = tail;          // Link new node to the current tail
    newNode->next = head;          // Link new node to the current head

    head->prev = newNode;          // Link old head back to new node
    tail->next = newNode;          // Link tail to new node

    head = newNode;                // Update head to the new node

    return 0;
}

// Function to insert at End
int insertAtEnd()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->prev = tail;          // Link new node to the current tail
    newNode->next = head;          // Link new node to the head

    tail->next = newNode;          // Link current tail to new node
    head->prev = newNode;          // Link head back to new node

    tail = newNode;                // Update tail to the new node

    return 0;
}

// Function to insert at a specific position
int insertAtPos()
{
    struct Node *newNode, *temp;
    int pos, i = 1;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;

    while(i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;           // Link new node to the next node
    newNode->prev = temp;                 // Link new node to the previous node

    temp->next->prev = newNode;           // Link next node back to new node
    temp->next = newNode;                 // Link previous node to new node

    return 0;
}

// Function to delete at Beginning
int deleteAtBeg()
{
    struct Node *temp;

    temp = head->next;              // Store the second node

    temp->prev = tail;              // New head points back to tail
    tail->next = temp;              // Tail points to new head

    free(head);                     // Free the old head
    head = temp;                    // Update head to the new first node

    return 0;
}

// Function to delete at End
int deleteAtEnd()
{
    struct Node *temp;

    temp = tail->prev;              // Store the previous node

    temp->next = head;              // New tail points to head
    head->prev = temp;              // Head points back to new tail

    free(tail);                     // Free the old tail
    tail = temp;                    // Update tail to the new last node

    return 0;
}

// Function to delete at specific position
int deleteAtPos()
{
    struct Node *p1, *p2;
    int pos, i = 1;

    printf("Enter position: ");
    scanf("%d", &pos);

    p1 = head;

    while(i < pos - 1)
    {
        p1 = p1->next;
        i++;
    }

    p2 = p1->next;

    p1->next = p2->next;             // Link previous node to next node
    p2->next->prev = p1;             // Link next node back to previous node

    free(p2);

    return 0;
}

// Function to display the circular doubly linked list forward
int DisplayCDLL()
{
    struct Node *temp;

    temp = head;

    printf("\nForward: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    while(temp != head);

    return 0;
}

// Function to display the circular doubly linked list backward
int DisplayCDLLReverse()
{
    struct Node *temp;

    temp = tail;

    printf("\nBackward: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    while(temp != tail);

    return 0;
}


int main()
{
    createCDLL();         // Create the circular doubly linked list             Line: 16
    insertAtBeg();        // Insert a new node at the beginning                 Line: 58            
    insertAtEnd();        // Insert a new node at the end                       Line: 78       
    insertAtPos();        // Insert a new node at position                      Line: 98       
    deleteAtBeg();        // Delete a node at beginning                         Line: 129  
    deleteAtEnd();        // Delete a node at end                               Line: 145
    deleteAtPos();        // Delete a node at position                          Line: 161
    DisplayCDLL();        // Display the circular doubly linked list forward    Line: 188                        
    DisplayCDLLReverse(); // Display the circular doubly linked list backward   Line: 206                        

    return 0;
}