// Reverse the array of maximum 5 elements.
#include <stdio.h>

int main() {
    int n = 4;
    int a[5]={1,2,3,4},b[5]={0},i;
    for(i=0;i<n;i++){
        b[n-1-i]=a[i];
    }
    printf("Array:\n");
    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}