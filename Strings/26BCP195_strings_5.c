#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Copy this text";
    char dest[50]; 
    strcpy(dest, src);
    printf("Destination string: %s\n", dest);
    return 0;
}