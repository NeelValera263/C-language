#include <stdio.h>

int main() {
    float net_salary,gross_salary,allowance,deduction;
    printf("Enter the value of gross salary : ");
    scanf("%f",&gross_salary);
    allowance = gross_salary/10;
    deduction = 3*gross_salary/100;
    net_salary = gross_salary + allowance - deduction;
    printf("Hence the net salary is %f",net_salary);
    return 0;
}