#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter your First number :\n");
    scanf("%d",&a);
    printf("Enter your Second number :\n");
    scanf("%d",&b);
    c=a-b;
    printf("%d - %d = %d \n",a,b,c);
    printf("Hence the substraction of first number from second number is %d\n",c);
}