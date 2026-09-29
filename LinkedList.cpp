#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

int createLL()
{
    head = 0;
    int ch = 1;
    while (ch)
    {
        struct Node *newNode, *temp;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);

        if (head == 0)
        {
            head = temp = newNode;
            newNode->next = 0;
        }
        else
        {
            temp->next = newNode;
            newNode->next = 0;
            temp = newNode;
        }

        printf("Do you want a next Node: ");
        scanf("%d", &ch);
    }
    return 0;
}

int displayLL()
{
    struct Node *temp;

    if (head == 0)
    {
        printf("List is empty\n");
        return 0;
    }

    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

int insert()
{
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    int pos;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("\nEnter data to insert: ");
    scanf("%d", &newNode->data);

    if (head == 0)
    {
        head = newNode;
        newNode->next = 0;
    }
    else
    {
        temp = head;
        for (int i = 0; i < pos - 2 && temp->next != 0; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return 0;
}

int main()
{
    printf("Hello, World!\n");
    createLL();
    insert();
    displayLL();

    return 0;
}
