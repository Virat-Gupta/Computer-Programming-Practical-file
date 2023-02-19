#include <stdio.h>

int countChar(char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char line[100];
    char ch;
    int count;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    count = countChar(line, ch);

    printf("The character '%c' appears %d times in the line.\n", ch, count);

    return 0;
}





