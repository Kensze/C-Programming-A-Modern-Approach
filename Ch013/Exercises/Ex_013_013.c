#include <stdio.h>
#include <string.h>

void build_index(const char *domain, char *index_url);

int main(void)
{
    char *domain = "knking.com";
    char index_url[100] = "";

    build_index(domain, index_url);

    printf("%s\n", index_url);

}

void build_index(const char *domain, char *index_url)
{
    strcpy(index_url, "http://");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
