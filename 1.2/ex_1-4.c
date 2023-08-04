//
//  temperatures.c
//

#include <stdio.h>

/* Print Celcius Faranheit table */
/* Floating point version */

int main ()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%7s %4s\n", "celsius", "fahr");
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%7.2f %4.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
