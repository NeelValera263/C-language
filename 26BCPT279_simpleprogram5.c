#include <stdio.h>

int main() {
    float a,b,c,d,e;
    printf("Enter your first No. : \n");
    scanf("%f", &a);
    printf("Enter your second No. : \n");
    scanf("%f", &b);
    float sum = a + b;
    printf("%f + %f = %f\n",a,b,sum);
    printf("Hence the sum of 2 numbers is %f\n", sum);
    c=a-b;
    printf("%f - %f = %f \n",a,b,c);
    printf("Hence the substraction of first number from second number is %f\n",c);
    d=a*b;
    printf("%f * %f = %f\n",a,b,d);
    printf("Hence multiplication of 2 numbers is : %f\n\n",d);
    e=a/b;
    printf("%f / %f = %f\n",a,b,e);
    printf("Hence division of first number by second number is : %f\n",e);
    return 0;
    
}