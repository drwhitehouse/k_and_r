#include <stdio.h>
#define BUFFER 20

int main()
{
    int c, inspace, count, histogram[BUFFER];
    inspace = 1;
    count = 0;
    for (int i = 0; i < BUFFER; ++i)
        histogram[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (inspace == 0) {
                inspace = 1;
            }
        } else {
            inspace = 0;
            ++count;
        }
        if (inspace == 1) {
            ++histogram[count];
            count = 0;
        }
    }
    for (int i = 1; i < BUFFER; ++i) {
        printf("%d\t%d", i, histogram[i]);
        putchar('\t');
        if (histogram[i] >= 1) {
           for (int j = 1; j <= histogram[i]; j++) {
               putchar('*');
           }
        }
        putchar('\n');
    }
}
