#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    int arr[] = {12, 4, 16, 3, 0, 47, 1, 22, 25};
    int min, max;
    findMinMax(arr, 9, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}