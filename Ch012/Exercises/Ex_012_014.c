#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], long int n, int key);

int main(void)
{
    const int temperatures[7][24] = {[4][22] = 32};
    int n = sizeof temperatures / sizeof(temperatures[0][0]);
    printf("32 was %s\n", search(&temperatures[0][0], n, 32) ? "found" : "not found");
}

bool search(const int a[], long int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++) {
        if (*p == key)
            return true;
    }
    return false;
}
