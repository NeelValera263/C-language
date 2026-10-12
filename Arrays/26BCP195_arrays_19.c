#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int target = 15;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            printf("Found %d at index %d\n", target, i);
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        printf("%d not found in array\n", target);
    }
    
    return 0;
}