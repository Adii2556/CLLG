#include<stdio.h>
#include<stdlib.h>

// Circular singly linked list node structure
struct Node
{
    int data;           // Data part of the node
    struct Node *next;  // Pointer to the next node
};

struct Node *head;      // Head pointer for the first node
struct Node *tail;      // Tail pointer for the last node

// Function to create a circular singly linked list
int createCSLL()
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

        newNode->next = 0;

        if(head == 0)
        {
            head = tail = newNode;       // If list is empty, initialize head and tail
            newNode->next = head;        // Point the node back to head
        }
        else
        {
            tail->next = newNode;        // Link the new node to the current tail
            newNode->next = head;        // Link the new node back to head
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

    newNode->next = head;        // Link the new node to the current head
    head = newNode;              // Update head to the new node
    tail->next = head;           // Link tail back to the new head

    return 0;
}

// Function to insert at End
int insertAtEnd()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = head;         // New node points to head

    tail->next = newNode;     // Link the new node to the current tail
    tail = newNode;           // Update tail to the new node
    
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

    newNode->next = temp->next;       // Link the new node to the next node
    temp->next = newNode;             // Link the previous node to the new node

    return 0;
}

// Function to delete at Beginning
int deleteAtBeg()
{
    struct Node *temp;

    temp = head->next;          // Store the second node
    free(head);                 // Free the first node
    head = temp;                // Update head to the second node
    tail->next = head;          // Link tail back to the new head

    return 0;
}

// Function to delete at End
int deleteAtEnd()
{
    struct Node *temp;

    temp = head;

    while(temp->next != tail)
    {
        temp = temp->next;
    }

    temp->next = head;           // New tail points to head
    free(tail);                  // Free the old tail
    tail = temp;                 // Update tail to the new last node

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
    p1->next = p2->next;          // Update the next node to skip the deleted node

    free(p2);

    return 0;
}

// Function to display the circular singly linked list
int DisplayCSLL()
{
    struct Node *temp;

    temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    while(temp != head);

    return 0;
}

int main()
{
    createCSLL();             // Create the circular singly linked list     Line: 15
    insertAtBeg();            // Insert a new node at the beginning         Line: 51
    insertAtEnd();            // Insert a new node at the end               Line: 67
    insertAtPos();            // Insert a new node at position              Line: 84
    deleteAtBeg();            // Delete a node at beginning                 Line: 112
    deleteAtEnd();            // Delete a node at end                       Line: 125
    deleteAtPos();            // Delete a node at position                  Line: 144
    DisplayCSLL();            // Display the circular singly linked list    Line: 169

    return 0;
}