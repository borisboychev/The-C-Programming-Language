#include <stdio.h>

#define MAX_LENGTH 26
#define IN 0
#define OUT 1

int main()
{

    int c, status;
    status = OUT;
    int letters[MAX_LENGTH];

    for (int i = 0; i <= MAX_LENGTH; ++i)
        letters[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
            ++letters[c - 65];
        else if (c >= 'a' && c <= 'z')
            ++letters[c - 97];
    }

    for (int i = 0; i < MAX_LENGTH; ++i)
        printf("%d", letters[i]);

    printf("HISTOGRAM\n");

    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        printf(" %2d | ", i);
        for (int j = 0; j < letters[i - 1]; ++j)
            putchar('+');
        putchar('\n');
    }

    return 0;
}