
#include <stdio.h>

int day_of_year(int month,int day,int year);

int main(void)
{
    int month, day, year;

    printf("Enter a date(yyyy:mm:d): ");
    scanf("%d:%d:%d", &year, &month, &day);

    printf("Nr of days: %d\n", day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month,int day,int year)
{
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sum, i;
    printf("%d\n", month);

    while (month != i) {
        sum += days[i];
        i++;
    }
    sum += day;

    return sum;

}
