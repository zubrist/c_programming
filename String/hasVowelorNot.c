#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word contains any vowel
int hasVowel(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return 1;  // Word contains a vowel
    }
    return 0;  // No vowel present
}

int main() {
    char sentence[200], word[50];
    int i = 0, j = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("\nWords without vowels:\n");

    // Extract words one by one
    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            // Build a word character by character
            word[j++] = sentence[i];
        } else {
            // End of a word
            if (j > 0) {
                word[j] = '\0';
                // Check and print word if it has no vowels
                if (!hasVowel(word)) {
                    printf("%s\n", word);
                }
                j = 0;  // Reset word index
            }
        }
        i++;
    }

    // For last word if string doesn't end with punctuation
    if (j > 0) {
        word[j] = '\0';
        if (!hasVowel(word)) {
            printf("%s\n", word);
        }
    }

    return 0;
}
