/* Write decimal representation of integer constants */

#include <stdio.h>

int main(void)
{
    int a = 077;
    int b = 0x77;
    int c = 0XABC;

    printf("A: 077(Octal) = %o \n", a);
    printf("B: 0x77(Hexadecimal) = %x\n", b);
    printf("C: 0XABC(Hexadecimal) = %x\n", c);

    return 0;
}
