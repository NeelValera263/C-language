#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40};
    int size = 4;

    size--;

    printf("Array after deletion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}