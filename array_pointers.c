#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    
    printf("Value of arr[0]: %d\n", arr[0]);
    printf("Value of arr[1]: %d\n", arr[1]);
    printf("Value of arr[2]: %d\n", arr[2]);

    printf("Address of arr[0]: %p\n", &arr[0]);
    printf("Address of arr[1]: %p\n", &arr[1]);
    printf("Address of arr[2]: %p\n", &arr[2]);

    int *ptr = &arr[0]; // or int *ptr = arr;

    printf("ptr: %p\n", ptr);
    printf("ptr + 1: %p\n", ptr + 1);
    printf("ptr + 2: %p\n", ptr + 2);

    printf("*(ptr + 0): %d\n", *(ptr + 0));
    printf("*(ptr + 1): %d\n", *(ptr + 1));
    printf("*(ptr + 2): %d\n", *(ptr + 2));

    printf("ptr[0]: %d\n", ptr[0]);
    printf("ptr[1]: %d\n", ptr[1]);
    printf("ptr[2]: %d\n", ptr[2]);

}