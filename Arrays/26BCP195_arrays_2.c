#include <stdio.h>

int main() {
    int a[10],i;
    printf("Enter the value of array: \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("The 4th value is %d\nThe 7th value is %d\nThe 9th value is %d\n", a[3],a[6],a[8]);
    return 0;
}