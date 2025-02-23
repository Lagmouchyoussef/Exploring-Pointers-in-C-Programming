#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, A[] = {12, 4, 16, 3, 0, 47, 1, 22, 25};
    int *ptr = A;
    printf("Enter X: ");
    scanf("%d", &X);
    for (int i = 0; i < 9; i++) {
        if (*ptr == X) {
            printf("Position: %d\n", i);
            return 0;
        }
        ptr++;
    }
    printf("Not found\n");
    return 0;
}