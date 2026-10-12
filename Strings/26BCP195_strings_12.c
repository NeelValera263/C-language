#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "This is a simple sentence.";
    int a = 0, e = 0, i_v = 0, o = 0, u = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        switch(ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i_v++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }
    
    printf("Frequency of vowels:\n");
    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", a, e, i_v, o, u);
    return 0;
}