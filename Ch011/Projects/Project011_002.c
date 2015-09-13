/*
 * Name: Project011_002.c
 * Purpose: Write a program that asks user to enter a time in 24-hour form, the program then displays the departure and arrival times for the flight whose departure time
 * is closer to the one entered by the user
 *
 * Author: K Sze
 * Example: Enter a 24-hour time: 13:15
 *          Closest departure time is 12:47 p.m., arriving at 3.00 pm
 *
 * Notes: Convert input into a time expressed in minutes since midnight, compare it to the departure times also expressed since midnight
 *
 */

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int desired_time, hour, minutes;
    int departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d", &desired_time);

   find_closest_flight(desired_time, &departure_time, &arrival_time);

   printf("Closest flight is %d and its arrival time is %d\n", departure_time, arrival_time);

    return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int hours = desired_time / 100 * 60;
    int minutes = desired_time - (hours /60) * 100;
    int desire = hours + minutes;

    int departures[] = {
        8  * 60,
        9  * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
    };

    int arrivals[] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        19 * 60 + 20,
        23 * 60 + 58,
        };

    int id, closest, min;
    id = closest = 0;
    min = 100;

    /* Calculate values using absoulute values */
    int abs_values[8];
    for (int i = 0; i < sizeof departures / sizeof(departures[0]); i++) {
        abs_values[i] = abs((departures[i] - desire));
    }


    /* Find the smallest(closest) value to the departure */
    for (int i = 0; i < sizeof abs_values / sizeof(abs_values[0]); i++) {
        if (abs_values[i] < min)
            min = abs_values[i];
    }

    /* Find which array element is the min and save it in an id to designate which array element */
    for (int i = 0; i < sizeof abs_values / sizeof(abs_values[0]); i++) {
        if (abs_values[i] == min)
            id = i;
    }

    int arrival_t = arrivals[id] - (arrivals[id] / 60 * 60) + (arrivals[id] / 60 * 100);
    closest = departures[id] - (departures[id] / 60 * 60) + (departures[id] / 60 * 100);
    *departure_time = closest;
    *arrival_time = arrival_t;

}
