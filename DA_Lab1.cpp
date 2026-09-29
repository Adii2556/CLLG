// Inserting

#include <stdio.h>

int main()
{
    int arr[50], n, i, j, pos, val, choose;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Element to be inserted: ");
    scanf("%d", &val);

    printf("1. Insert at beginning\n");
    printf("2. Insert at specific position\n");
    printf("3. Insert at end\n");
    printf("Enter your choice: ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        for(i=n-1; i>=0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = val;
        n+=1;
        break;

    case 2:
        printf("Enter the position to insert the element: ");
        scanf("%d", &pos);

        for (i = n - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = val;
        n += 1;
        break;

    case 3:
        for (i = 0; i < n; i++)
        {
            arr[i + 1] = arr[i];
        }
        arr[n] = val;
        n += 1;
        break;

    default:
        break;
    }

    printf("The new array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}