#include<stdio.h>
void strln(char *t) {
    int cnt = 0;
    while(*t != '\0' && t++) {
        cnt++;
    }
    printf("Length of the inputed string is : %d\n", cnt);
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    strln(s);

    return 0;
}
