#include <stdio.h>
#include <stdlib.h>

// Queue using Linked List

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

// Insert in Queue
int enqueue()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    if (rear == 0)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    return 0;
}

// Delete from Queue
int dequeue()
{
    struct node *temp;
    temp = front;

    printf("%d is deleted", front->data);
    free(front);
    temp = front;

    return 0;
}

// Displaying Queue
int display()
{
    struct node *temp;
    temp = front;

    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}

int main()
{
    int ch, n = 1;

    while (n)
    {
        printf("1. Insert element in Queue\n2. Delete from Queue\n3. Display Queue elements\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;

        default:
            printf("Invalid Choice");
            n = 0;
            break;
        }
    }
    return 0;
}