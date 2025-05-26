#include<stdio.h>
void vowel(char *t) {
    while(*t) {
        if(*t=='a'||*t=='e'||*t=='i'||*t=='o'||*t=='u'||
        *t=='A'||*t=='E'||*t=='I'||*t=='O'||*t=='U') 
        {
            putchar(*t);
        }
        t++;
    }
    printf("\n");
}

int main() {
    char s[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", s);
    printf("Vowels: ");
    vowel(s);

    return 0;
}
