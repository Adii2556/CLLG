// Binary Search 

#include <stdio.h>

int main()
{
    int arr[50], n, i, j, val, beg, end, mid;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Element to be searched: ");
    scanf("%d", &val);

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while (beg <= end)
    {
        if (arr[mid] < val)
        {
            beg = mid + 1;
        }
        else if (arr[mid] == val)
        {
            printf("Element found at position: %d\n", mid + 1);
            break;
        }
        else
        {
            end = mid - 1;
        }
        mid = (beg + end) / 2;
    }

    if (beg > end)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}