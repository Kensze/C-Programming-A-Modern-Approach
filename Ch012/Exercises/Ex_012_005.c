#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3,4,5};
    int *p = a;

    /* Not true beacuse we are testing if location in memory is equal to what is in that location */
    printf("p == a[0] %s\n", p == a[0] ? "True" : "False");

    /* Will be true since we are comparing p to the memory address it points to */
    printf("p == &a[0] %s\n", p == &a[0] ? "True" : "False");

    /* Will be true since we dereference the pointer and it points to a[0] */
    printf("*p == a[0] %s\n", *p == a[0] ? "True" : "False");

    /* True beacuse of pointer arithmetic, *(p + 0) == a[0] */
    printf("p[0] == a[0] %s\n", p[0] == a[0] ? "True" : "False");

}
