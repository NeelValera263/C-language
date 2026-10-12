#include <stdio.h>

int main() {
    int a[4],i,b[5]={0},index;
    printf("Enter the 4 integers : ");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    printf("Tell the index where the new element must be added : ");
    scanf("%d",&index);
    if(index<0 || index>4){
        printf("Enter a valid index.");
    } else{
    printf("The number which is to be added in the array : ");
        scanf("%d",&b[index]);
        for(i=0;i<index;i++){
            b[i] = a[i];
        }
        for(i=0+index;i<5;i++){
            b[i+1] = a[i];
        }
        printf("\nThe new array : \n\n");
        for(i=0;i<5;i++){
            printf("%d ",b[i]);
        }
    }
    
    return 0;
}