// Deleting

#include <stdio.h>

int main()
{
    int arr[50], n, i, j, pos, choose;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("1. Delete from beginning\n");
    printf("2. Delete from specific position\n");
    printf("3. Delete from end\n"); 
    printf("Enter your choice: ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n -= 1;
        break;

    case 2:
        printf("Enter the position of the element to be deleted: ");
        scanf("%d", &pos);

        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n -= 1;
        break;

    case 3:
        n -= 1;
        break;

    default:
        printf("Invalid choice.\n");
        return 0;
    }

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}