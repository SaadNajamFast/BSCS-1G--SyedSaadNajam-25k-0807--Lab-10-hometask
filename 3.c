#include <stdio.h>

int main() {
    char text[] = "Hello World 123! Programming is fun.";
    int i;

    int vowels = 0, consonants = 0, digits = 0, spaces = 0, total = 0;

    for (i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        total++;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    printf("Text: \"%s\"\n\n", text);
    printf("Statistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", total);

    return 0;
}
