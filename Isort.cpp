// Insertion Sort
#include <stdio.h>
#define N 10

int arr[N];
int n = 0;

int create() {
    printf("Size: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter data for index %d: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    return 0;
}

int InsertionSort(){
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int  j = i-1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
        
    }
    
    return 0;
}

int Display() {
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

int main() {
    create();
    InsertionSort();
    Display();

    return 0;
}
