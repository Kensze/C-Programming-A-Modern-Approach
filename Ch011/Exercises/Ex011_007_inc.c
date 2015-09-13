#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int month = 0;
    int day = 0;
    int year = 2015;
    int day_of_year;

    printf("Specify how many days: ");
    scanf("%d", &day_of_year);

    split_date(day_of_year, year, &month, &day);

    printf("Month : %d, day : %d\n", month, day);
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i = 0;
    int day_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1 = 0;

    for (; i < 12; i++) {
        if ((day_of_year > day_in_months[i])) {
            day_of_year -= day_in_months[i];
            m1++;
        } else {
            *month = m1;
            *day = day_of_year;
        }
    }
}


