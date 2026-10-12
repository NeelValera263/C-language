// Copy one array of 5 elements to another array of 10 elements skipping one element.

#include <stdio.h>

int main() {
    int i,c,a[5]={0,1,2,3,4},b[10]={0};
    
    for(i=0;i<5;i++){
    c = 2*i;    
        b[c]=a[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}