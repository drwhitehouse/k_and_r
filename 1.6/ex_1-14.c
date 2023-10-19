#include <stdio.h>
#define ASCII 128

int main()
{
    int c, histogram[ASCII];
    for (int i = 0; i < ASCII; ++i)
        histogram[i] = 0;
    while ((c = getchar()) != EOF) {
            ++histogram[c];
    }
    for (int i = 0; i < ASCII; ++i) {
        printf("%d\t%c\t%d", i, i, histogram[i]);
        putchar('\t');
        if (histogram[i] >= 1) {
           for (int j = 1; j <= histogram[i]; j++) {
               putchar('*');
           }
        }
        putchar('\n');
    }
}
