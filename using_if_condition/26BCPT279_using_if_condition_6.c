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
    printf("Hence the total of 3 subjects is %f\n\n",t);
    printf("Hence the average of 3 subjects is %f\n\n",avg);
    
    if(m>=35 && c>=35 && p>=35)
    {
        if(avg>=70)
        {
        printf("distinction");
    }
    else if(avg>=60 && avg<70)
        {
        printf("First Class");
    }
    else if(avg>=50 && avg<60)
        {
        printf("Second Class");
    }
    else if(avg>=35 && avg<50)
        {
        printf("Third class");
    }
    else
        {
        printf("Failed");
        }
    }
      else
        {
          printf("Failed");
      }
    
}