#include <stdio.h>

int main() {
    int n,a,b,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    a = n;
    for (int i=1;i<(n+1);i++) {
        b=a%i;
        if (b==0) {
            c++;
        }
    }
    if (c==2) {
        printf("It's a prime number.");
    }
    else {
        printf("It's not a prime number.");
    }
    return 0;
    }