#include <stdio.h>

/* copy input to output; second version */

int main()
{
    int c, blanks = 0, tabs = 0, newlines = 0;
    while ((c = getchar()) != EOF)
    { if ( c == ' ' ) ++blanks;
      if ( c == '\t' ) ++tabs;
      if ( c == '\n' ) ++newlines;
        putchar(c); }
    printf("%d blanks\n", blanks);
    printf("%d tabs\n", tabs);
    printf("%d newlines\n", newlines);
}
