#include<stdio.h>
#include<string.h>

int main() {
    int N;
    scanf("%d", &N);
    char str[19];
    sprintf(str, "%d", N);
    int koyta[10] = {0};

    for(int i = 0; str[i] != '\0'; i++) koyta[str[i] - '0']++;

    for(int i = 0; i < 10; i++) printf("%d ", koyta[i]);
    printf("\n");

    return 0;
}
