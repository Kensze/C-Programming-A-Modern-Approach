#include <stdio.h>

int read_line(char str[], int n);

int count_spaces(const char *s);

int main(void)
{
    int i;
    char sentence[125];

    printf("Enter a sentence: ");
    int j = read_line(sentence, 125);
    printf("%d chars in total and %d are spaces\n", j, count_spaces(sentence));

    for (i = 0; i < j; i++)
        printf("%c", sentence[i]);
    printf("\n");


}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int count_spaces(const char *s)
{
    int count = 0;

    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}
