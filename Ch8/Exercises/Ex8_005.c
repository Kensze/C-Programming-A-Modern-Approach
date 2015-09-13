/* Fibo numbers: 0,1,1,2,3,5,8,13 etc
 * Write a program that declares an array named fib_numbers of length 40
 * and fills the array with the first 40 fibonacci numbers
 * Tip: Fill in the first two numbers individually, then use a loop to compute remaining
 */

#include <stdio.h>

int main(void)
{
    int i;
    int fib_numbers[40] = {0,1};

    for (i = 2; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++)
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];


    for (i = 0; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++) {
        printf("%d ", fib_numbers[i]);
        printf("\n");
    }




    return 0;
}
