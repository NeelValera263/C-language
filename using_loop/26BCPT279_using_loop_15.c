#include <stdio.h>

int main(){
    float a[10],s,b;
    int i,n;
    s=0;
    printf("Enter the number of numbers you are going to enter for getting their average : \n\n");
    scanf("%d",&n);
   printf("Enter your %d numbers.\n\n",n);
   for(i=0;i<n;i++){
   printf("Enter your Number : ");
   scanf("%f",&a[i]);
   s += a[i];
   }
   b = s/n;
      printf("The sum of these %d numbers is %f\n",n,s);
      printf("The average of these %d numbers is %f",n,b);
   return 0;
}
