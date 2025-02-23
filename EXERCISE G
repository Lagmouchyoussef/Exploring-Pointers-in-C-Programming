#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, A[] = {12, 4, 16, 3, 0, 47, 1, 22, 25};
    int *P1 = A, *P2 = A;
    printf("Enter X: ");
    scanf("%d", &X);
    while (P1 < A + 9) {
        if (*P1 != X) {
            *P2 = *P1;
            P2++;
        }
        P1++;
    }
    while (P2 < A + 9) {
        *P2 = 0;
        P2++;
    }
    for (int i = 0; i < 9; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}