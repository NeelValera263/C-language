#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long square = (long long)num * num; 
    int temp = num;
    int a = 1;
    
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            a = 0;
            break;
        }
        temp /= 10;
        square /= 10;
    }
    
    if (a == 1) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }
    
    return 0;
}