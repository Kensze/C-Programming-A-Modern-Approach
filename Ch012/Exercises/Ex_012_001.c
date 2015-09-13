#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];
    int *c;
    int n = sizeof a / sizeof(a[0]);

    printf("Array contents: ");
    /* Use pointer arithemtic to loop trough array */
    for (c = a; c < a + n; c++)
        printf("%d ", *c);
    printf("\n");

    printf("p is %d\n", *p);
    printf("q is %d\n", *q);

    /* Value of *(p+3) should equal a[1+3] = a[4] = 14 */
    printf("*(p+3) %d\n", *(p+3));

    /* Value of *(q-3) should equal  a[5-3] = a[2] = 34 */
    printf("*(q-3) %d\n", *(q-3));

    /* Value of q - p should be 5 - 1 = 4 */
    /* Beacuse when we subtract pointers from eachother, the result is the distance
     * between the pointers */
    printf("q - p %d\n", q - p);

    /* p < q  should be true since q points to a later element in memory */
    printf("p < q: %d\n", p < q);

    /* Condition *p < *q true or false? *p < *q =  15 < 2 = 0  */
    printf("*p < *q %d\n", *p < *q);

    /* I want to use pointer arithmetic to get value 72 */
    printf("%d %d\n", *(p+6), *(q+2));
}
