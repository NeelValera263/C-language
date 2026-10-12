#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";
    
    int result = strcmp(str1, str2);
    
    if(result > 0) {
        printf("'%s' is greater than '%s'\n", str1, str2);
    } else if(result < 0) {
        printf("'%s' is lower than '%s'\n", str1, str2);
    } else {
        printf("Both strings are the same\n");
    }
    return 0;
}