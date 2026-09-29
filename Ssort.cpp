// Selection Sort
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

int SelectionSort(){
    printf("started");
    int min, pos;
    for (int i = 0; i < n-1; i++){
        min = arr[i];
        pos = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                pos = j;
            }
        }

        if(pos != i){
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
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
    SelectionSort();
    Display();

    return 0;
}
