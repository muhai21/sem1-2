#include<stdio.h>

int main() {
int r, c;
scanf("%d %d", &r, &c);
int arr[100][100];
for(int i = 0; i < r; i++) 
for(int j = 0; j < c; j++) 
scanf("%d", &arr[i][j]);

for(int i = 0; i < r; i++) {
int max = arr[i][0];
for(int j = 1; j < c; j++) {
if(arr[i][j] > max) max = arr[i][j];
}
printf("%d\n", max);
}
return 0;
}
