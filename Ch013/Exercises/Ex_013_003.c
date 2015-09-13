#include <stdio.h>

int main(void)
{
    int i, j;
    char *s;

    printf("Enter values: ");

    /* Expect user to enter 12abc34 and 56def78 */
    /* i will contain: 12 */
    /* s will contain: abc34 beacuse 34 is also a string, scanf will ignore
     * whitespaces, newlines and tabs */
    /* j will contain: 56 */
    scanf("%d%s%d", &i, s, &j);
    printf("i: %d\ts: %s\tj:%d\n", i, s, j);
}
