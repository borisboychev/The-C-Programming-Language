/*
* Author: Boris Boychev (borisboychev007@gmail.com)
*/

#include <stdio.h>

#define IN 1  //inside a word
#define OUT 0 //outside a word

int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("New lines: %d Words: %d Chars: %d\n", nl, nw, nc);
    return 0;
}

//A bug possible is if we type digits not letters and the program will still count it as a world
/*
    TEST INPUT:
    Hello World
    1234
    ^Z
    
    OUTPUT:
    New lines: 2 Words: 3 Chars: 18
    
*/