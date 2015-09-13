#include <stdio.h>

#include <string.h>

void censor(char *str);

int main(void)
{
    char s[] = "food fool";
    censor(s);
    puts(s);
}

void censor(char *str)
{
    for (int i = 0; i < 15; i++) {
        if (str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o')
            str[i] = str[i+1] = str[i+2] = 'x';
    }
}
