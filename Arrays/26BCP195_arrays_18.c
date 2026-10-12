#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40};
    int size = 4;
    int target = 30;

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {

            for(int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }

    printf("Array after deletion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}