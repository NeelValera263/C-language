#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30};
    int size = 3;

    arr[size] = 40;
    size++;

    printf("Array after insertion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}