#include <stdlib.h>
#include <stdio.h>

#define IN 0
#define OUT 1
#define MAX_LENGTH 10

int main()
{
    int c, status, length;
    status = OUT;
    length = 0;

    int word_length[MAX_LENGTH];

    for (int i = 0; i < MAX_LENGTH; ++i)
        word_length[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            if (status == OUT)
            {
                length = 0;
                status = IN;
            }
            ++length;
        }
        else
        {
            if (status == IN)
            {
                ++word_length[length - 1];
                status = OUT;
            }
            else
                ++word_length[MAX_LENGTH];
        }
    }

    //for (int i = 0; i < MAX_LENGTH; ++i)
    //printf("%d\n", word_length[i]);

    printf("Histogram\n");

    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        printf(" %2d | ", i);
        for (int j = 0; j < word_length[i]; ++j)
            putchar('*');
        putchar('\n');
    }
    return 0;
}

//Exercise 1.13 from page 25