#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 500; i++) {
        int prime = 1;

        if (i <= 1) {
            prime = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1) {
            count++;
        }
    }

    printf("Count of prime numbers: %d\n", count);

    return 0;
}