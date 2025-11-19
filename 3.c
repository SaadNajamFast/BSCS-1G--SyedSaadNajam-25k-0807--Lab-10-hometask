#include <stdio.h>

int main() {
    char text[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, total = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);   // allows spaces

    for (i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        total++;

        // Vowel check
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowels++;
        }
        // Consonant check
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Digit check
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Space check
        else if (ch == ' ') {
            spaces++;
        }
    }

    printf("\nStatistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", total);

    return 0;
}
