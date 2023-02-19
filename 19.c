#include <stdio.h>
#include <string.h>

void replaceSubstring(char *line, char *substring, char *replacement) {
    char buffer[1024];
    char *p;

    // Find the first occurrence of the substring in the line
    p = strstr(line, substring);

    while (p != NULL) {
        // Copy the part of the line before the substring
        strncpy(buffer, line, p - line);
        buffer[p - line] = '\0';

        // Append the replacement string
        strcat(buffer, replacement);

        // Append the part of the line after the substring
        strcat(buffer, p + strlen(substring));

        // Copy the modified line back into the original line
        strcpy(line, buffer);

        // Find the next occurrence of the substring in the line
        p = strstr(line, substring);
    }
}

int main() {
    char line[1024] = "The quick brown fox jumps over the lazy dog.";
    char *substring = "fox";
    char *replacement = "cat";

    replaceSubstring(line, substring, replacement);

    printf("%s\n", line);

    return 0;
}



