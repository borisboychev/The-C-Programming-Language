#include <stdio.h>

int main()
{
    float fahr;
    printf("Fahr <----> Celsius\n");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%.2f\t\t%.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    return 0;
}

//Exercise 1.5 from page 15