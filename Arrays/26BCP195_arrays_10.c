#include <stdio.h>

void f(int a[10]) {
    int visited[10] = {0}; // Tracks numbers we have already counted

    printf("\nFrequency : \n");
    
    for(int i = 0; i < 10; i++) {
        // Skip this element if we've already counted it
        if(visited[i] == 1) {
            continue; 
        }

        int count = 1; // Start with 1 for the current element
        
        // Only check the elements that come after 'i'
        for(int j = i + 1; j < 10; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1; // Mark the duplicate so we don't count it again later
            }
        }
        
        // Print the actual number (a[i]), not the index (i)
        printf("Frequency of %d is %d.\n", a[i], count);
    }
}

int main() {
    int a[10];
    
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    f(a);
    return 0;
}
