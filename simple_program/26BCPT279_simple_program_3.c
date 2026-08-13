#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter your first number : \n");
    scanf("%d",&a);
    printf("Enter your second number : \n");
    scanf("%d",&b);
    c=a*b;
    printf("%d * %d = %d\n",a,b,c);
    printf("Hence multiplication of 2 numbers is : %d\n",c);
    return 0;
}