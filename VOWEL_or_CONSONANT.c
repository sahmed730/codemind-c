#include<stdio.h>

int main() {
    char ch;

    // Input a single character
    scanf("%c", &ch);

    // Check if the character is a vowel or a consonant
    if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U')) {
        printf("VOWEL
");
    } else {
        printf("CONSONANT
");
    }

    return 0;
}
