/* Testing some thing with pointers */

#include <stdio.h>

int main(void)
{
    int i, j, *p, *q;
    i = 1;
    j = 2;

    p = &i;

    printf("p is pointing to i with memory %p and value %d\n", p, *p);
    *p = 31;
    printf("I know changed memory %p with an assignment to *p with current value %d and i is %d\n", p, *p, i);


    return 0;
}
