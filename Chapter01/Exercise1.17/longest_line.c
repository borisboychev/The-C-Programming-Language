#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[]);

int main()
{
    int len;               /* current line length */
    int max;               /* maxmimum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line ever */
    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /* there was a line */
    {
        printf("Longest line is: %s", longest);
        printf("It's length is: %d", max);
    }
}

/* read a line into s , return length */
int get_line(char s[], int lim)
{
    int c, i, l;

    for (i = 0, l = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < lim - 1)
            s[l++] = c;
    }

    if (c == '\n')
    {
        s[l++] = c;
        ++i;
    }
    s[l] = '\0';
    return i;
}

/* copy from x to y , assume that y is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;

    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i++] = '\0';
}

//Exercise 1.16 from page 30