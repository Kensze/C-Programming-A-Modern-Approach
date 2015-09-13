/* Original
   void avg_sum(double a[], int n, double *avg, double *sum)
   {
   int i;

   sum = 0.0;
   for (i = 0; i < n; i++)
   sum += a[i];
   avg = sum / n;
   }

*/

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    int i = 0;
    double a[5] = {1.23,5.55,23,56,64};
    double avg, sum;

    printf("input ");
    for (i = 0; i < 5; i++)
        printf("%5.2f ", a[i]);
    printf("\n");

    avg_sum(a, 5, &avg, &sum);

    printf("Avg: %5.3f\t Sum: %5.3f\n", avg, sum);

}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}



