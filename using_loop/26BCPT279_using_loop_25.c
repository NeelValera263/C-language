#include <stdio.h>

int main(){
    int i,c,n,s,d,a,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = n;
    c=0;
    while(n>0){
        d=n%10;
        c = (c*10) + d; // revesing th number
        n/=10;
    }
    if(a==c){
        printf("It's a palindrome number.\n");
    } else{
        printf("It is not a palindrom number.\n");
    }
    return 0;
    }