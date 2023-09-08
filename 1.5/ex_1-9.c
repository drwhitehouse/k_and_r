#include <stdio.h>

int main()
{
    int c, blanks=0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') { 
            ++blanks;
            if (blanks < 2) {
                putchar(c);
            }
        } 
        if (c != ' ') { 
            blanks = 0;
            putchar(c);
        }
    }
}
