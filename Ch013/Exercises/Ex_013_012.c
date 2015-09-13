#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char file_name[25];
    char extension[10];

    printf("Enter a file name: ");
    scanf("%s", file_name);
    get_extension(file_name, extension);

    printf("%s have %sfile extension %s\n", file_name, strlen(extension) ? "" : "no ", extension);
}


void get_extension(const char *file_name, char *extension)
{

    // use strlen and strcpy

    const char *p = file_name;

    /* First solution */
    /*
    for (; *p != '.'; p++)
        ;
    if (p - file_name > 4)
        extension = "";
    else {
        p++;
        strcpy(extension, p);
    }
    */

    while (*p) {
        p++;
        if (*p == '.') {
            p++;
            strcpy(extension, p);
            break;
        }
        strcpy(extension, "");
    }
    return;
}
