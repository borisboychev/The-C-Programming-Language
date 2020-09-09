
#include <stdio.h>
/*
* Author: Boris Boychev (borisboychev007@gmail.com)
*/

int main()
{
    int c, blank;
    blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (blank < 1)
            {
                blank = 1;
                putchar(c);
            }
        }
        else
        {
            blank = 0;
            putchar(c);
        }
    }

    return 0;
}

//Exercise 1.9 from page 21