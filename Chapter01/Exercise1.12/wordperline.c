/*
* Author: Boris Boychev (borisboychev007@gmail.com)
*/

#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{

    int c, nw;

    nw = 0;

    while ((c = getchar()) != EOF)
    {
        if (!(c == ' '))
        {
            putchar(c);
        }
        else
        {
            putchar('\n');
        }
    }

    return 0;
}

//Exercise 1.12 from page 23