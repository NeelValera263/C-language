#include <stdio.h>

int main() {
    
    float a, b, c;

    printf("Enter the numbers for comparison to get the largest and the smallest:\n\n");
    
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    printf("Enter the third number : ");
    scanf("%f", &c);
    printf("\n");

    float max = a;
    float min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;

    if (max == min) {
        printf("All numbers are equal: %.2f\n", max);
    } 
    else {
        printf("The largest number is %.2f and the smallest is %.2f\n", max, min);
    }

    return 0;
}
