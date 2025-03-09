#include <stdio.h>
#include <stdlib.h>

void calculate(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int sum, diff;
    calculate(10, 5, &sum, &diff);
    printf("Sum: %d, Difference: %d\n", sum, diff);
    return 0;
}