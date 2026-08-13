#include <stdio.h>

int main() {
    float avg,m,p,c,t;
    printf("Enter the marks of Physics : ");
    scanf("%f",&p);
    printf("Enter the marks of Chemistry : ");
    scanf("%f",&c);
    printf("Enter the marks of Maths : ");
    scanf("%f",&m);
    t = m+c+p;
    avg = t/3;
    printf("Hence the total of 3 subjects is %f\n",t);
    printf("Hence the average of 3 subjects is %f",avg);
    return 0;
}