#include <stdio.h>

int main() {
    int n=4,i,a[n],b,c[5]={0};    
    printf("Enter all 4 integers : ");  
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the first digit of array : ");
    scanf("%d",&b);
    c[0] = b;
    for(i=0;i<n;i++){
        c[i+1] = a[i];
    }
    
    for(i=0;i<n+1;i++){
        printf("%d ",c[i]);
    }
    return 0;
}