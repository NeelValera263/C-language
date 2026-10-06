#include<stdio.h>

int main()
{
    char s[30];
    int i;
    printf("Enter any string");
    gets(s);

    i = 0;
    while(s[i] != '\0')
    {
        if (s[i] >='A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
            i++;
        }
    }
    printf("Lower case string is: %s", s);
    return 0;
}
