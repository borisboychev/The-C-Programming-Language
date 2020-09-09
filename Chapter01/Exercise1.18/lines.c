#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int lim);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len == 1 && line[0] == '\n')
            continue;

        printf("%s", line);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i, l; /* l increases only if statement is valid */

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 1 && c != '\t')
            s[l++] = c;
    if (c == '\n' && l < lim - 1)
        s[l++] = c;
    s[l] = '\0';

    return l;
}

//Exercise 1.18 from page 31