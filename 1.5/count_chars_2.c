#include <stdio.h>
/* count chars version 2 */

int main()
{
    double nc;
    for (nc = 0; getchar() !=EOF; ++nc)
        ; // null statement here because the for loop requires a "body"
    printf("%.0f\n", nc);
}
