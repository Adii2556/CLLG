// Linear Search
#include <stdio.h>
#define N 10

int arr[N];
int n;

int create(){
    printf("Size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter data for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    return 0;
}

int LinearSearch(){
    int x, pos=-1;
    printf("Enetr a no. ot search: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(x == arr[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1)
        printf("Not Found");
    else
        printf("Found at %d", pos+1);

    return 0;
}

int main(){
    create();
    LinearSearch();

    return 0;
}
