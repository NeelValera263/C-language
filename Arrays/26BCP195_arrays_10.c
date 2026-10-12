#include <stdio.h>

void f(int a[10]) {
    int visited[10] = {0};

    printf("\nFrequency : \n");
    
    for(int i = 0; i < 10; i++) {

        if(visited[i] == 1) {
            continue; 
        }

        int count = 1;
        for(int j = i + 1; j < 10; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

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
