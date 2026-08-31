#include <stdio.h>

int main() {
    int n,s;
    s=0;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(int i = 0;i<=n;i=i+2){
        s += i;
    }
    printf("%d\n",s);
    return 0;
}