#include <stdio.h>
#define MAXLINE 1000 /* Max input line size */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line (up to MAXLINE) */
/* print the correct length (even if > MAXLINE) */

int main()
{
    int len;                /* current line length */
    int max;                /* max length so far */
    char line[MAXLINE];     /* current input length */
    char longest[MAXLINE];  /* longest line saved here */
    int c;                  /* temp var for very long line reading */

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0) {
        if (line[len-1] != '\n') {
            while((c=getchar()) !=EOF && c!='\n')
                ++len; 
        } 
        printf("%d\n", len);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }    
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* my_getline: read a line into s, return length */

int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to' - assume 'to' is big enough */

/* 'to[]' and 'from[]' are pointers to the first element of the arrays that are passed to this function.
   i.e. 'to[]' points to 'longest', and 'from[]' points to 'line'
   printing the values using a '%p' format string should confirm this */

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
