#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    printf("%s\n", test_extension("memo.txt", "TXT") ? "Yep, checks out" : "Nope, not havin it");

}

bool test_extension(const char *file_name, const char *extension)
{
    while (*file_name++ != '.')
        ;
    while (*file_name)
        if (toupper(*file_name++) != *extension++)
            return false;
    return true;
}
