#include <stdio.h>

int main() {
    int i, a = 0, b = 0;
    char c;

    for (i = 0; i < 50; i++) {
        printf("Enter the character (m/M for boy, f/F for girl): ");
        scanf(" %c", &c);

        if (c == 'm' || c == 'M') {
            a++;
        } else if (c == 'f' || c == 'F') {
            b++;
        }
    }

    printf("The number of boys in class are %d.\n", a);
    printf("The number of girls in class are %d.\n", b);

    return 0;
}
