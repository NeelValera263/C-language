

void main() {
    float a,b;
     printf("Enter the numbers for comparision to get the largest and the smallest number between them\n");
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the secomd number : ");
    scanf("%f", &b);
    if(a>b)
        printf("The first number is the largest number and the second number is the smallest number.");
    if(b<a)
        printf("The second number is the largest number and the first number is the smallest number.");
    else
         printf("Both the numbers are Equal none of them is largest and smallest of two numbers.");
}