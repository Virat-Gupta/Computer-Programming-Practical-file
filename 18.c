#include <stdio.h>
#include <ctype.h>

int main()
{
    char line[100];
    int vowels = 0, consonants = 0, digits = 0, i;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; ++i) {
        if (isalpha(line[i])) {
            switch (tolower(line[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    ++vowels;
                    break;
                default:
                    ++consonants;
            }
        } else if (isdigit(line[i])) {
            ++digits;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}




