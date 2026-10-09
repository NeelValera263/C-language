#include <stdio.h>

int i,j,a[5],t;

void asort() {
    for (i=0;i<4;i++) {
        for (j=0;j<4-i;j++) {
            if (a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

void dsort() {
    for (i=0;i<4;i++) {
        for (j=0;j<4-i;j++) {
            if (a[j]<a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main() {
    for (i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    asort();
    printf("Accending Sorted array: \n");
    for (i=0;i<5;i++) {
        printf("%d\n",a[i]);
    }
    dsort();
    printf("Decending Sorted array: \n");
    for (i=0;i<5;i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}