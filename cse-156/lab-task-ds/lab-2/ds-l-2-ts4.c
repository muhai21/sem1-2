#include<stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    int *start = &arr[0], *end = &arr[n - 1];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int *j = end; j >= start; j--) {
        printf("%d ", *j);
    }
    printf("\n");

    return 0;
}