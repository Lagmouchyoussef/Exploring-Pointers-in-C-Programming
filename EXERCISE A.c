#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, max = 0, *ptr;
    printf("Enter numbers (0 to stop): ");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        ptr = &n;
        if (*ptr > max) max = *ptr;
    }
    printf("Max: %d\n", max);
    return 0;
}