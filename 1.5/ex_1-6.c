#include <stdio.h>

int main()
{
    int c;
    c = (getchar() != EOF); // if c is not EOF then true if c is EOF then false
    printf("%d", c);
}
