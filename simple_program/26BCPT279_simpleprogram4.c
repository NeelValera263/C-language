#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter your first number : \n");
    scanf("%f",&a);
    printf("Enter your second number : \n");
    scanf("%f",&b);
    c=a/b;
    printf("%f / %f = %f\n",a,b,c);
    printf("Hence division of first number by second number is : %f\n",c);
    return 0;
}