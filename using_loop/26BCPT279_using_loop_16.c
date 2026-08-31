#include <stdio.h>

int main() {
    int i,a[100],b,c;
    for(i=0;i<100;i++){
        printf("Enter your number whose index=%d : ",i);
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i=0;i<100;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    int min = a[0];
    for(i=0;i<100;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("The largest number is %d\n",max);
    printf("The smallest number is %d\n",min);
    return 0;
}