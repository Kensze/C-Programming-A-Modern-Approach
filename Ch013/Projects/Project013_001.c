#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[21] = "";
    char smallest_word[21] = "";
    char largest_word[21] = "";

    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    while (1) {
        printf("Enter word: ");
        scanf("%s", word);
        if (strlen(word) == 4)
            break;
        if (strcmp(largest_word, word) < 0)
            strcpy(largest_word, word);
        if (strcmp(smallest_word, word) > 0)
            strcpy(smallest_word, word);
    }

    printf("Smallest word %s\n", smallest_word);
    printf("Largest word %s\n", largest_word);
}
