#include <stdio.h>

int main() {
    int a,b,i;
    b=0;
    i=0;
    printf("Enter your number : ");
    scanf("%d",&a);
    while(i<a){
        b += 1;
        printf("%d\n",b);
        ++i;
    }
    
    return 0;
}