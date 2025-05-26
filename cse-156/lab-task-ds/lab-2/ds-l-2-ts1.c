#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Before swaping,\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("Before swaping,\na = %d\nb = %d\n", a, b);
    return 0;



}