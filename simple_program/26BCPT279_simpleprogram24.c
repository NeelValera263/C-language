#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value of the first number : ");
    scanf("%d",&a);
    printf("Enter the value of the second number : ");
    scanf("%d",&b);
    printf("\n--- Before Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n--- After Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}