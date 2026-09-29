// Stack

#include <stdio.h>

int stack[10];
int top = -1;

// Function to push value in stack
int push()
{
    int n;

    printf("Enetr the no. of elements: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (top == 9)
        {
            printf("OverFlow");
            break;
        }

        top++;
        printf("Enter data: ");
        scanf("%d", &stack[top]);
        n--;
    }

    return 0;
}

// Function to pop value out of stack
int pop()
{
    if (top != -1)
    {
        printf("%d is to be poped", stack[top]);
        top--;
    }
    else
    {
        printf("UnderFlow");
    }

    return 0;
}

// Function to see top value in stack
int peek()
{
    if (top != -1)
        printf("%d", stack[top]);
    else
        printf("UnderFlow");

    return 0;
}

// Function to print all value in stack
int display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }

    return 0;
}

int main()
{
    push(); // First create initial stack

    int ch, run = 1;

    
    while (run)
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(); // Line:09
            break;
        case 2:
            pop(); // Line:34
            break;
        case 3:
            peek(); // Line:50
            break;
        case 4:
            display(); // Line:61
            break;

        default:
            printf("Invalid choice");
            run = 0;
            break;
        }
    }

    return 0;
}