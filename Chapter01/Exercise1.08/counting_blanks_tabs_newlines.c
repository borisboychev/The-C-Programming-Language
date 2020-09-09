/*
* Author: Boris Boychev (borisboychev007@gmail.com)
*/

#include <stdio.h>

int main()
{
    int c;
    int tabs, blanks, newlines;
    tabs = blanks = newlines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
        else if (c == '\n')
            ++newlines;
    }

    printf("Blanks: %d | Tabs: %d | NewLines: %d", blanks, tabs, newlines);
}

//Exercise 1.8 from page 21