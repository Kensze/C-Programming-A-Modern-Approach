#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {1,123,67,1337};
    int n = sizeof(a) / sizeof(a[0]);
    int largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);
    printf("Largest is %d, second largest is %d\n", largest, second_largest);
}


void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] > *largest) {              // if current element is bigger than current largest(biggest)
            *second_largest = *largest;     // set second largest to largest
            *largest = a[i];                // set largest to current array element
        } else if (a[i] > *second_largest)  // else if current array element is bigger than second
            *second_largest = a[i];         // second largest = to current array element
    }
}
