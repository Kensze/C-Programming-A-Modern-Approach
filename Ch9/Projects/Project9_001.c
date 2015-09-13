#include <stdio.h>

void selection_sort(int nums[], int len);

int main(void)
{
    int count;
    int i;

    printf("How many numbers? ");
    scanf("%d", &count);
    int nums[count];            // Use a variable length array

    printf("Enter a series of integers, end with an 0: ");
    for (i = 0; i < count; i++)
        scanf("%d", &nums[i]);

    selection_sort(nums, count);

    for (i = 0; i < count; i++)
        printf("%d ", nums[i]);
    printf("\n");


    return 0;
}

void selection_sort(int nums[], int len)
{
    if (len == 0)
        return;

    int i;
    int max = nums[0];          // Initialize max to the first number
    int id = 0;

    for (i = 0; i < len; i++) {
        if (nums[i] > max) {
            id = i;             // Save which indice max was found
            max = nums[i];      // Save which number was at that indice
        }
    }
    /* Swap the max item with the last item in the array */
    nums[id] = nums[len-1];     // Copy whats at end-1 into where the max was found.
    nums[len-1] = max;          // Put the max at the end-1, okay to overwrite where it was as it is saved in variable max

   selection_sort(nums, len - 1);

}
