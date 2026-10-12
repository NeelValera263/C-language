#include <stdio.h>

int a[10],i,b[10],n;
 
void rightsideshift(int a[10]){
    for(i=0;i<10-n;i++){
        a[i+n] = b[i];
    }
    for(i=0;i<n;i++){
        a[i] = 0;
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void leftsideshift(int a[10]){
    for(i=0;i<11-n;i++){
        a[10-n-i] = b[10-i];
    }
    for(i=0;i<n+1;i++){
        a[10-i] = 0;
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main() { 
    printf("Enter the value of shift : ");
    scanf("%d",&n);
    printf("Enter 10 integers : ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        b[i]=a[i];
    }
    printf("\nLeft side shift : \n\n");
    leftsideshift(a);
    printf("\nRight side shift : \n\n");
    rightsideshift(a);
    return 0;
}