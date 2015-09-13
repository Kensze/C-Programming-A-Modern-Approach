
#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    int hr, min, sec;
    long seconds_since_midnight;

    printf("Enter seconds since midnight: ");
    scanf("%ld", &seconds_since_midnight);

    split_time(seconds_since_midnight, &hr, &min, &sec);

    printf("%dH:%dM:%dS\n", hr, min, sec);
}


void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr =  total_sec / (60.0 * 60.0);
    *min = (total_sec / 60) % 60;
    *sec = total_sec - ((*hr * 60 * 60) + (*min * 60));
}
