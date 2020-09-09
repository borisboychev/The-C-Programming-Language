/*
* Author: Boris Boychev (borisboychev007@gmail.com)
*/

#include <stdio.h>

int main()
{
    int c, tab, backspace, slash;
    tab = backspace = slash = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            if (!tab)
            {
                tab = 1;
                putchar(c);
            }
        }
        else if (c == '\b')
        {
            if (!backspace)
            {
                backspace = 1;
                putchar(c);
            }
        }
        else if (c == '\\')
        {
            if (!slash)
            {
                slash = 1;
                putchar(c);
            }
        }
        else
        {
            backspace = tab = slash = 0;
            putchar(c);
        }
    }

    return 0;
}

//Exercise 1.10 from page 21