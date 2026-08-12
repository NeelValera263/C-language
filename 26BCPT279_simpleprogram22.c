#include <stdio.h>

int main() {
    float gross_sales,net_sales,discount;
    printf("Enter the value of gross sales : ");
    scanf("%f",&gross_sales);
    discount = gross_sales/10;
    net_sales = gross_sales - discount;
    printf("The value of net sales is %f",net_sales);
    return 0;
}