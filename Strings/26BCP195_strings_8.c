#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "racecar";
    char rev[50];

    strcpy(rev, str);

    int len = strlen(rev);
    for(int i = 0; i < len / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[len - i - 1];
        rev[len - i - 1] = temp;
    }

    if(strcmp(str, rev) == 0) {
        printf("%s is a Palindrome\n", str);
    } else {
        printf("%s is not a Palindrome\n", str);
    }
    return 0;
}