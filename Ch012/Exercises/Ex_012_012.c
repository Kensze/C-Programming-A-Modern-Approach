#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {1,13,87,20,90,23,67,110,97,33};
    int n = sizeof a / sizeof(a[0]);
    int largest, second_largest;
    int *p;

    printf("Out of ");
    for (p = a; p < a + n; p++)
        printf("%d ", *p);
    printf("\n");
    find_two_largest(a, n, &largest, &second_largest);
    printf("\nLargest %d\t Second largest %d\n", largest, second_largest);
}

/* a points to an array of length n */
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int l, secondl;
    const int *p;
    l = secondl = 0;

    for (p = a; p < a + n; p++) {
        if (*p > l) {
            secondl = l;
            l = *p;
            printf("Largest %p %d\n", p, *p);
        }
        if (*p < l && *p > secondl) {
            secondl = *p;
            printf("Second %p %d\n", p, *p);
        }
    }

    *largest = l;
    *second_largest = secondl;
}
