#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    int T[N];
    int *ptr = T;
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;
    }
    ptr = T;
    for (int i = 0; i < N; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\nSum: %d\n", sum);
    return 0;
}