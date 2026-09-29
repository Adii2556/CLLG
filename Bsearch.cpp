// Binary Search
#include <stdio.h>
#define N 10

int arr[N];
int n, mid, l=0, h=N-1;

int create(){
    printf("Size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter data for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    return 0;
}

// int sort();

int BinarySearch(){
    int x;

    printf("Enetr a no. to search: ");
    scanf("%d", &x);

    while(l < h){
        mid = (l+h)/2;
        
        if(arr[mid] == x){
            printf("Found at %d", mid);
            break;
        }
        else if(x > arr[mid])
            l = mid+1;
        else
            h = mid-1;
        
    }
    if(l > h)
        printf("Not Found");

    return 0;
}

int main(){
    create();
    BinarySearch();

    return 0;
}
