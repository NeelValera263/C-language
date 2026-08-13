#include <stdio.h>

int main() {
    float c,f;
    printf("Enter the value of Fahrenheit : ");
    scanf("%f", &f);
    c = 5*(f-32)/9;
    printf("The converted value in Celcius is %f",c);
    return 0;
}