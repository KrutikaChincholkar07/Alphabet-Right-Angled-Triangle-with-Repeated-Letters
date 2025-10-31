#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);

    int n = ch - 'A' + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }

    return 0;
}
