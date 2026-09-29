// Linear Search

#include <stdio.h>

int main()
{
    int arr[50], n, i, j, val;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Element to be searched: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            printf("Element found at position: %d\n", i + 1);
            break;
        }
    }

    if (i == n)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}