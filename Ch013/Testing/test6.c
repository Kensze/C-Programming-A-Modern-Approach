#include <stdio.h>

int main(void)
{
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto", "NonExistantPlanet"};

    int j = 0;
    int n = sizeof planets / sizeof(planets[0]);
    for (int i = 0; i < n; i++) {
        while (planets[i][j]) {
            printf("%c", planets[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
    }
    printf("%lu Planets stored in a ragged array\n", sizeof planets / sizeof(planets[0]));
}
