#include <stdio.h>

int main() {
    int n,s;
    s=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        s *= i;
    }
    printf("%d\n",s);
    return 0;
}