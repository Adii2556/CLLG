// Bubble Sort
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

int BubbleSort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    BubbleSort();
    Display();

    return 0;
}
