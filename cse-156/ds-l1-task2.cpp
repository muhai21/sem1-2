#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hlf = N / 2;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i==0 || i==N-1 ||i==j || j+i == N-1 || j==0 || j == N-1) 
                putchar('@');
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
