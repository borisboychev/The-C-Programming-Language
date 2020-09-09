#include <stdio.h>

#define MINLENGTH 80
#define MAXLENGHT 1000

int get_line(char s[], int limit);

int main()
{
    int len;
    char line[MAXLENGHT];

    while ((len = get_line(line, MINLENGTH)) > 0)
    {

        if (len > MINLENGTH)
            printf("Line with length > 80 --> %s\n", line);
    }
}

int get_line(char s[], int limit)
{
    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}

//Exercise 1.17 from page 31