#include <stdio.h>

int main(){
    float a[10],s,b;
    int i;
    s=0;
   printf("Enter your 10 numbers.\n\n");
   for(i=0;i<10;i++){
   printf("Enter your Number : ");
   scanf("%f",&a[i]);
   s += a[i];
   }
   b = s/10;
   printf("The sum of these 10 numbers is %f\n",s);
   printf("The average of these 10 numbers is %f\n",b);
   return 0;
}
