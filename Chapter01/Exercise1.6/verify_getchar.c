#include <stdio.h>

void main()
{
    int c = getchar();
    printf("getchar returns: %d", c != EOF);
}

//Exercise 1.6 from page 18
//expression getchar() returns 1 if it is != EOF