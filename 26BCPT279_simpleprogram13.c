#include <stdio.h>

void main() {
    float b,kb,mb,gb;
    printf("Enter the value of byte : ");
    scanf("%f",&b);
    kb = b/1024;
    mb = kb/1024;
    gb = mb/1024;
    printf("The value of byte coverted to KB : %f\n",kb);
    printf("The value of byte coverted to MB : %f\n",mb);
    printf("The value of byte coverted to GB : %f\n",gb);
}