#include <stdio.h>

/* copy input to output; second version */

int main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    printf("the value of EOF is %d\n", c);
}
