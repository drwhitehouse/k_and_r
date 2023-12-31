#include <stdio.h>
#define MAXLINE 1000 /* Max input line size */

int my_getline(char line[], int maxline);

/* print lines longer than 80 chars */

int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input length */
    char longest[MAXLINE];  /* longest line saved here */
    int c;                  /* temp var for very long line reading */

    while ((len = my_getline(line, MAXLINE)) > 0) {
        if (line[len-1] != '\n') {
            while((c=getchar()) !=EOF && c!='\n')
                ++len; 
        } 
        if (len > 80) {
            printf("%s", line);
        }
    }    
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
