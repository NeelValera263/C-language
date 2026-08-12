#include <stdio.h>

int main() {
    int a,b;
    printf("Enter your first No. : \n");
    scanf("%d", &a);
    printf("Enter your second No. : \n");
    scanf("%d", &b);
    int sum = a + b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("Hence the sum of 2 numbers is %d", a+b);
    return 0;
}