#include <stdio.h>

int main() {
    int i,a[10];
    int j = 0;
    int k = 0;
    int p = 0;
    for(i=0;i<10;i++){
        printf("Enter the number with index=%d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        int neg = a[i];
        if(neg<0){
            j++;
        }
    }
    for(i=0;i<10;i++){
        int pos = a[i];
        if(pos>0){
            k++;
        }
    }
    for(i=0;i<10;i++){
        int z = a[i];
        if(z==0){
            p++;
        }
    }
    printf("Number of positive number : %d\n",k);
    printf("Number of negative number : %d\n",j);
    printf("Number of zero number : %d\n",p);
    return 0;
}