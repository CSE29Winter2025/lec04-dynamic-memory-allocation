#include <stdio.h>
#include <stdlib.h>

// correct implementation of reverse which allocates array on the heap
int* reverse(int arr[], int n) {
    int *reversed = malloc(n * sizeof(int));
    if (reversed == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - i - 1];
    }
    return reversed;
}

int main() {
    int arr[3] = {10, 20, 30};
    int *reversed = reverse(arr, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", reversed[i]);
    }
    free(reversed);
}
