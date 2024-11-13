#include <stdio.h>

void printNumberPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);
    printNumberPyramid(N);
    return 0;
}

